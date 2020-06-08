////////////////////////////////////////
// Author:              Chris Murphy
// Date created:        04.06.20
// Date last edited:    08.06.20
////////////////////////////////////////
#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H
#include <QWidget>
#include <QtDebug>
#include <QSpinBox>
#include <QStack>
#include <QTimer>
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

private:
    // Enumerated values representing the possible states of a sub-section of the cells (e.g. row, column, region) within the sudoku grid.
    enum SudokuSubsectionState
    {
        Incomplete, // There are no recurring numbers other than at least one zero (represents an 'empty' cell).
        Invalid, // There is at least one recurring number within the collection other than zero (e.g. if a row has two nines, it is invalid according the sudoku rules).
        Complete // There are no empty cells and no recurring numbers.
    };

    Ui::SudokuSolver* ui; // A dynamic pointer to the ui object used to handle the widget and its elements.
    QList<QList<SudokuCell>> rows; // A list of nine lists, each of which contains all the cells of one row of the sudoku grid.
    QList<QList<SudokuCell>> columns; // A list of nine lists, each of which contains all the cells of one column of the sudoku grid.
    QList<QList<SudokuCell>> regions; // A list of nine lists, each of which contains all the cells of one 9x9 'region' block of the sudoku grid.
    const int updateSolverCallInterval = 500; // The number of milliseconds between each call of the updateSolver() function when the sudoku is in the process of being solved.

    //// Returns the current state (incomplete, invalid, or complete) of a list of 9 sudoku cells representing either a row, column, or region within the sudoku grid.
    //SudokuSubsectionState getSubsectionState(QList<SudokuCell> subsectionCells) const;

    // Checks the row, column, and region that the specified cell belongs to in order to see if its current number value is repeated in any of them - returns true if not, else returns false.
    bool getIfCellValueIsValid(const SudokuCell& cell);

    // Returns whether or not the specified non-zero value between 1 and 9 repeats more than once within the list of cells.
    bool getIfNonZeroValueRepeatsInCells(const QList<SudokuCell>& cells, int v) const;



    void updateSolving();
};

#endif
