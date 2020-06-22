////////////////////////////////////////
// Author:              Chris Murphy
// Date created:        04.06.20
// Date last edited:    22.06.20
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

    // Creates the timer to repeatedly call the updateSolving() function until the puzzle is solved/deemed invalid.
    updateSolvingTimer = new QTimer(this);
    connect(updateSolvingTimer, &QTimer::timeout, this, QOverload<>::of(&SudokuSolver::updateSolving));

    ui->resetButton->setEnabled(false);
    resetLabelsToDefault();
}

SudokuSolver::~SudokuSolver()
{
    delete ui;
}

void SudokuSolver::on_solveButton_clicked()
{
    updateSolvingTimer->start(ui->cycleIntervalSlider->value());

    // Disables the spinboxes and buttons so that the user cannot interfere with the solving process while also making the clue spinbox values bold so they stand out.
    QList<QSpinBox*> spinBoxes = this->findChildren<QSpinBox*>();
    QFont boldFont = spinBoxes[0]->font();
    boldFont.setWeight(QFont::Bold);
    for(int i = 0; i < spinBoxes.size(); ++i)
    {
        if(spinBoxes[i]->value() != 0)
            spinBoxes[i]->setFont(boldFont);

        spinBoxes[i]->setEnabled(false);
    }
    ui->solveButton->setEnabled(false);
    ui->resetButton->setEnabled(true);
    ui->clearButton->setEnabled(true);

    bool areCluesValid = getIfAllCellsAreValid();
    // Checks to insure the clue cells are immediately valid - if not, cancels the process.
    if(!areCluesValid)
    {
        cancelSolving("Invalid clues entered - there are repeated values in at least one row, column, or region");
        return;
    }

    // Adds each of the currently empty cells to the stack of cells to be solved - does this in reverse order so the initial cell on the top of the stack is the closest to the upper-left.
    for(int i = rows.count() - 1; i > -1; --i)
    {
        for(int j = rows.count() - 1; j > -1; --j)
        {
            if(rows[i][j].getValue() == 0)
                emptyCellsStack.push(rows[i][j]);
        }
    }
    // If all the clue cells are valid and there are no empty cells, the user has entered a complete puzzle solution.
    if(areCluesValid && emptyCellsStack.empty())
    {
        cancelSolving("Solving process aborted - complete puzzle solution has already been entered");
        return;
    }

    // Moves the first cell to be solved to the top of the solving stack and sets the initial value to 1 to begin the solving process.
    solvingStack.push(emptyCellsStack.top());
    emptyCellsStack.pop();
    solvingStack.top().setValue(1);

    // Resets the solve timer and cycle counter.
    solveTimer.restart();
    solveCycles = 0;

    ui->statusLabel->setText("Solving...");
}

void SudokuSolver::on_clearButton_clicked()
{
    updateSolvingTimer->stop();

    QList<QSpinBox*> spinBoxes = this->findChildren<QSpinBox*>();
    QFont standardFont = spinBoxes[0]->font();
    standardFont.setWeight(QFont::Normal);
    for(int i = 0; i < spinBoxes.size(); ++i)
    {
        spinBoxes[i]->setEnabled(true);
        spinBoxes[i]->setValue(0);
        spinBoxes[i]->setFont(standardFont);
    }

    ui->solveButton->setEnabled(true);
    ui->resetButton->setEnabled(false);
    resetLabelsToDefault();
}

void SudokuSolver::on_resetButton_clicked()
{
    updateSolvingTimer->stop();

    QList<QSpinBox*> spinBoxes = this->findChildren<QSpinBox*>();
    QFont standardFont = spinBoxes[0]->font();
    standardFont.setWeight(QFont::Normal);
    for(int i = 0; i < spinBoxes.size(); ++i)
    {
        // If the spinbox value isn't bold, clears it - this way all the original clues which were emboldened will remain once the grid is reset.
        if(!spinBoxes[i]->font().bold())
            spinBoxes[i]->setValue(0);

        spinBoxes[i]->setEnabled(true);
        spinBoxes[i]->setFont(standardFont);
    }

    ui->solveButton->setEnabled(true);
    ui->resetButton->setEnabled(false);
    resetLabelsToDefault();
}

void SudokuSolver::on_cycleIntervalSlider_valueChanged(int value)
{
    ui->cycleIntervalLabel->setText("Milliseconds Between Cycles: " + QString::number(value));

    updateSolvingTimer->setInterval(value);
}

bool SudokuSolver::getIfAllCellsAreValid()
{
    for(int i = 0; i < rows.count(); ++i)
    {
        for(int j = 0; j < columns.count(); ++j)
        {
            if(rows[i][j].getValue() > 0 && !getIfCellValueIsValid(rows[i][j]))
                return false;
        }
    }

    return true;
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
    // If the current top cell in the solving stack contains a valid value:
    if(solvingStack.top().getValue() <= 9 && getIfCellValueIsValid(solvingStack.top()))
    {
        // If there are no empty cells left and all of the current cells are valid, this means the sudoku is solved.
        if(emptyCellsStack.isEmpty())
            onSolveCompleted();
        // Else adds the next empty cell to the solving stack and changes its value to 1.
        else
        {
            solvingStack.push(emptyCellsStack.top());
            emptyCellsStack.pop();
            solvingStack.top().setValue(1);
        }
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
            if(solvingStack.empty() && !emptyCellsStack.empty())
                cancelSolving("Solving process ended - this puzzle has no valid solutions");
            else
                moveToPreviousValidCellAndIncrement();
        }
    }

    solveCycles++;
    updateTimerLabels();
}

void SudokuSolver::moveToPreviousValidCellAndIncrement()
{
    if(solvingStack.top().getValue() + 1 <= 9)
        solvingStack.top().setValue(solvingStack.top().getValue() + 1);
    else
    {
        solvingStack.top().setValue(0);
        emptyCellsStack.push(solvingStack.top());
        solvingStack.pop();
        if(solvingStack.empty() && !emptyCellsStack.empty())
            cancelSolving("Solving process ended - this puzzle has no valid solutions");
        else
            moveToPreviousValidCellAndIncrement();
    }
}

void SudokuSolver::cancelSolving(const QString& message)
{
    updateSolvingTimer->stop();

    ui->clearButton->setEnabled(true);
    ui->resetButton->setEnabled(true);
    ui->statusLabel->setText(message);
}

void SudokuSolver::onSolveCompleted()
{
    updateSolvingTimer->stop();

    ui->clearButton->setEnabled(true);
    ui->resetButton->setEnabled(true);
    ui->statusLabel->setText("Sudoku solved!");
}

void SudokuSolver::updateTimerLabels()
{
    // The object used to convert the elapsed milliseconds provided by the solve timer into a more easily readable hour:minuts:second:millisecond format for the label.
    QTime solveTime(0, 0, 0, 0);
    solveTime = solveTime.addMSecs(solveTimer.elapsed());
    ui->solveTimeLabel->setText("Solve Time: " + QString::number(solveTime.hour()) + ":" + QString::number(solveTime.minute()) + ":" + QString::number(solveTime.second()) + ":" + QString::number(solveTime.msec()));

    ui->solveCyclesLabel->setText("Solve Cycles: " + QString::number(solveCycles));
}

void SudokuSolver::resetLabelsToDefault()
{
    ui->solveTimeLabel->setText("Solve Time: " + QString::number(0) + ":" + QString::number(0) + ":" + QString::number(0) + ":" + QString::number(0));
    ui->solveCyclesLabel->setText("Solve Cycles: " + QString::number(0));

    ui->statusLabel->setText("Enter clues and press 'Solve' to begin");
}
