////////////////////////////////////////
// Author:              Chris Murphy
// Date created:        04.06.20
// Date last edited:    05.06.20
////////////////////////////////////////
#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H
#include <QWidget>
#include <QtDebug>
#include <QSpinBox>

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

private:
    Ui::SudokuSolver* ui; // A dynamic pointer to the ui object used to handle the widget and its elements.
    QList<QList<QSpinBox*>> rows; // A list of nine lists, each of which contains all the cells of one row of the sudoku grid.
    QList<QList<QSpinBox*>> columns; // A list of nine lists, each of which contains all the cells of one column of the sudoku grid.
    QList<QList<QSpinBox*>> regions; // A list of nine lists, each of which contains all the cells of one 9x9 'region' block of the sudoku grid.
};

#endif
