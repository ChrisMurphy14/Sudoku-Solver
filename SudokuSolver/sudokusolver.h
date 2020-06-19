////////////////////////////////////////
// Author:              Chris Murphy
// Date created:        04.06.20
// Date last edited:    19.06.20
////////////////////////////////////////
#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H
#include <QWidget>
#include <QtDebug>
#include <QSpinBox>
#include <QStack>
#include <QTime>
#include <QTimer>
#include <QElapsedTimer>
#include "sudokucell.h"

QT_BEGIN_NAMESPACE
namespace Ui { class SudokuSolver; }
QT_END_NAMESPACE

// The user interface object used to handle the main window of the sudoku solver application.
class SudokuSolver : public QWidget
{
    Q_OBJECT // A macro required for any object that implements signals, slots, or properties.

public:
    SudokuSolver(QWidget* parent = nullptr);

    ~SudokuSolver();

private slots:
    void on_solveButton_clicked();

    void on_clearButton_clicked();

    void on_resetButton_clicked();

    void on_cycleIntervalSlider_sliderMoved(int position);

    void on_cycleIntervalSlider_valueChanged(int value);

private:
    Ui::SudokuSolver* ui; // A dynamic pointer to the ui object used to handle the widget and its elements.
    QElapsedTimer solveTimer; // A timer used retrieve the elapsed time since the solving process began.
    QList<QList<SudokuCell>> rows; // A list of nine lists, each of which contains all the cells of one row of the sudoku grid.
    QList<QList<SudokuCell>> columns; // A list of nine lists, each of which contains all the cells of one column of the sudoku grid.
    QList<QList<SudokuCell>> regions; // A list of nine lists, each of which contains all the cells of one 9x9 'region' block of the sudoku grid.
    QStack<SudokuCell> emptyCellsStack; // A stack used to contain the empty cells to be solved during the solving process.
    QStack<SudokuCell> solvingStack; // A stack used to contain the cells which have been modified during the depth-first solving process.
    QTimer* updateSolvingTimer; // The timer which will repeatedly call the updateSolving() function until the puzzle is solved/deemed invalid.    
    uint solveCycles; // The number of cycles which have passed since the solving process began.

    // Checks the row, column, and region that the specified cell belongs to in order to see if its current number value is repeated in any of them - returns true if not, else returns false.
    bool getIfCellValueIsValid(const SudokuCell& cell);

    // Returns whether or not the specified non-zero value between 1 and 9 repeats more than once within the list of cells.
    bool getIfNonZeroValueRepeatsInCells(const QList<SudokuCell>& cells, int v) const;

    // The function used to run through a single iteration of the algorithm to solve the current sudoku puzzle.
    void updateSolving();

    // A recursive function which pops the solving stack cells until a valid (non-9) cell is found, then increments its value by 1.
    void moveToPreviousValidCellAndIncrement();

    // Called when the puzzle is successfully solved.
    void onSolveCompleted();

    // Updates the solveTimeLabel and solveCyclesLabel to both display the current values stored in the solveTimer and solveCycles variables.
    void updateTimerLabels();

    // Sets the solveTimeLabel and solveCyclesLabel to both display zero.
    void clearTimerLabels();
};

#endif
