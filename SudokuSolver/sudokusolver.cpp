////////////////////////////////////////
// Author:              Chris Murphy
// Date created:        04.06.20
// Date last edited:    09.06.20
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
    // Creates a timer to repeatedly call the updateSolving() function until the puzzle is solved/deemed invalid.
    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, QOverload<>::of(&SudokuSolver::updateSolving));
    timer->start(updateSolverCallInterval);

    // Disables the spinboxes and solve button so that the user cannot interfere with the solving process.
    QList<QSpinBox*> spinBoxes = this->findChildren<QSpinBox*>();
    for(int i = 0; i < spinBoxes.size(); ++i)
    {
        //spinBoxes[i]->setEnabled(false);
    }
    ui->solveButton->setEnabled(false);

    // Adds each of the currently empty cells to the stack of cells to be solved - does this in reverse order so the initial cell on the top of the stack is the closest to the upper-left.
    for(int i = rows.count() - 1; i > -1; --i)
    {
        for(int j = rows.count() - 1; j > -1; --j)
        {
            if(rows[i][j].getValue() == 0)
                emptyCellsStack.push(rows[i][j]);
        }
    }
    // Moves the first cell to be solved to the top of the solving stack and sets the initial value to 1 to begin the solving process.
    solvingStack.push(emptyCellsStack.top());
    emptyCellsStack.pop();
    solvingStack.top().setValue(1);
}

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
    // If the current top cell in the solving stack contains a valid value, adds the next empty cell to the solving stack and changes its value to 1.
    if(solvingStack.top().getValue() <= 9 && getIfCellValueIsValid(solvingStack.top()))
    {
        solvingStack.push(emptyCellsStack.top());
        emptyCellsStack.pop();
        solvingStack.top().setValue(1);
    }
    // Else if the current top cell in the solving stack contains an invalid value:
    else
    {
        // Iterates the value if it is less than 9.
        if(solvingStack.top().getValue() < 9)
            solvingStack.top().setValue(solvingStack.top().getValue() + 1);
        // Else if it equals 9, sets that cell to be blank, adds it back to the empty cells stack, then pops the solving stack cells until a valid (non-9) cell is found and increments its value by 1.
        else
        {
            solvingStack.top().setValue(0);
            emptyCellsStack.push(solvingStack.top());
            solvingStack.pop();

            moveToPreviousValidCellAndIncrement();
        }
    }
}

// A recursive function which pops the solving stack cells until a valid (non-9) cell is found, then increments its value by 1.
void SudokuSolver::moveToPreviousValidCellAndIncrement()
{
    if(solvingStack.top().getValue() + 1 <= 9)
        solvingStack.top().setValue(solvingStack.top().getValue() + 1);
    else
    {
        solvingStack.top().setValue(0);
        emptyCellsStack.push(solvingStack.top());
        solvingStack.pop();

        moveToPreviousValidCellAndIncrement();
    }
}
