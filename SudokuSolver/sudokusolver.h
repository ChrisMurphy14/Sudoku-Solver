#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SudokuSolver; }
QT_END_NAMESPACE

class SudokuSolver : public QWidget
{
    Q_OBJECT

public:
    SudokuSolver(QWidget *parent = nullptr);
    ~SudokuSolver();

private:
    Ui::SudokuSolver *ui;
};
#endif // SUDOKUSOLVER_H
