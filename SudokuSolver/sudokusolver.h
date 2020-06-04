////////////////////////////////////////
// Author:              Chris Murphy
// Date created:        04.06.20
// Date last edited:    04.06.20
////////////////////////////////////////
#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H
#include <QWidget>

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
};

#endif
