////////////////////////////////////////
// Author:              Chris Murphy
// Date created:        04.06.20
// Date last edited:    08.06.20
////////////////////////////////////////
#include "sudokusolver.h"
#include "ui_sudokusolver.h"

SudokuSolver::SudokuSolver(QWidget* parent) : QWidget(parent), ui(new Ui::SudokuSolver)
{
    ui->setupUi(this); // Sets up the user interface for the widget.

    // Creates 9 empty lists into which each cell will be appended to create multi-dimensional lists representing the rows, columns, and regions of the sudoku grid.
    for(int i = 0; i < 9; ++i)
    {
        rows.append(QList<SudokuCell>());
        columns.append(QList<SudokuCell>());
        regions.append(QList<SudokuCell>());
    }

    // Converts each spinbox in the window into a sudoku cell that additionally contains the indexes of the row, column, and region that it belongs to.
    QList<QSpinBox*> spinBoxes = this->findChildren<QSpinBox*>();
    for(int i = 0; i < spinBoxes.size(); ++i)
    {
        // Derives the row, column, and region indicies according to the coordinates included within each spinbox name (e.g. "cell01" is column 0, row 1).
        int cellRowIndex = spinBoxes[i]->objectName()[5].digitValue();
        int cellColumnIndex = spinBoxes[i]->objectName()[4].digitValue();
        int cellRegionIndex = ((cellColumnIndex - cellColumnIndex % 3) / 3) + (cellRowIndex - cellRowIndex % 3);

        SudokuCell cell(spinBoxes[i], cellRowIndex, cellColumnIndex, cellRegionIndex);

        rows[cellRowIndex].append(cell);
        columns[cellColumnIndex].append(cell);
        regions[cellRegionIndex].append(cell);
    }
}

SudokuSolver::~SudokuSolver()
{
    delete ui;
}

void SudokuSolver::on_solveButton_clicked()
{
    // Creates a timer which regularly calls the updateSolving() function.
    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, QOverload<>::of(&SudokuSolver::updateSolving));
    timer->start(updateSolverCallInterval);

    //    // Flags every cell with an existing value as a 'clue cell' that cannot be changed during the solving process.
    //    for(int i = 0; i < rows.count(); ++i)
    //    {
    //        for(int j = 0; j < rows.count(); ++j)
    //        {
    //            rows[i][j].isClueCell = rows[i][j].getValue() != 0;
    //        }
    //    }

    // Disables the spinboxes and solve button so that the user cannot interfere with the solving process.
    QList<QSpinBox*> spinBoxes = this->findChildren<QSpinBox*>();
    for(int i = 0; i < spinBoxes.size(); ++i)
    {
        //spinBoxes[i]->setEnabled(false);
    }
    ui->solveButton->setEnabled(false);
}

//SudokuSolver::SudokuSubsectionState SudokuSolver::getSubsectionState(QList<SudokuCell> subsectionCells) const
//{
//    Q_ASSERT(subsectionCells.count() == 9);

//    QList<int> subsectionCellValues; // A list containing the current number value for each cell spinbox in the subsection.
//    for(int i = 0; i < subsectionCells.count(); ++i)
//    {
//        subsectionCellValues.append(subsectionCells[i].getValue());
//    }

//    // If the subsection contains a zero, this means at least one of the cells is still 'empty' and the subsection is incomplete.
//    if(subsectionCellValues.contains(0))
//        return SudokuSubsectionState::Incomplete;
//    // Else if the subsection contains a repeating number (QSets cannot contain duplicate values so if the range of values is smaller in a set than in a list, at least one duplicate value is present), the subsection is invalid.
//    else if(subsectionCellValues.toSet().count() < subsectionCellValues.count())
//        return SudokuSubsectionState::Invalid;
//    // Else the subsection is filled with a valid range from 1 - 9 and the subsection is complete.
//    else
//        return SudokuSubsectionState::Complete;
//}

bool SudokuSolver::getIfCellValueIsValid(const SudokuCell& cell)
{
    if(!getIfNonZeroValueRepeatsInCells(rows[cell.getRowIndex()], cell.getValue()) && !getIfNonZeroValueRepeatsInCells(columns[cell.getColumnIndex()], cell.getValue()) && !getIfNonZeroValueRepeatsInCells(regions[cell.getRegionIndex()], cell.getValue()))
        return true;
    else
        return false;
}

bool SudokuSolver::getIfNonZeroValueRepeatsInCells(const QList<SudokuCell>& cells, int v) const
{
    Q_ASSERT(v >= 1 && v <= 9);

    int valueRepeatCount = 0;
    for(int i = 0; i < cells.count(); ++i)
    {
        if(cells[i].getValue() == v)
        {
            valueRepeatCount++;
            if(valueRepeatCount > 1)
                return true;
        }
    }
    return false;
}

void SudokuSolver::updateSolving()
{
    QStack<SudokuCell> cellsToSolve;
    for(int i = rows.count() - 1; i > -1; --i)
    {
        for(int j = rows.count() - 1; j > -1; --j)
        {
            cellsToSolve.push(rows[i][j]);
        }
    }

    QStack<SudokuCell> solvingStack;
    solvingStack.push(cellsToSolve.top());
    cellsToSolve.pop();
    solvingStack.top().setValue(1);

    if(getIfCellValueIsValid(solvingStack.top()))
    {
        solvingStack.push(cellsToSolve.top());
        cellsToSolve.pop();
        solvingStack.top().setValue(1);
    }
    else
    {
        if(solvingStack.top().getValue() < 9)
            solvingStack.top().setValue(solvingStack.top().getValue() + 1);
        else
        {
            solvingStack.top().setValue(0);
            cellsToSolve.push(solvingStack.top());
            solvingStack.pop();
        }
    }

    //        if(cellsToSolve.top().getValue() < 9)
    //        {
    //            cellsToSolve.top().setValue(cellsToSolve.top().getValue() + 1);
    //        }
    //        else
    //        {
    //            cellsToSolve.pop();
    //        }





    qDebug() << "updateSolving() called";
}
