////////////////////////////////////////
// Author:              Chris Murphy
// Date created:        04.06.20
// Date last edited:    05.06.20
////////////////////////////////////////
#include "sudokusolver.h"
#include "ui_sudokusolver.h"

SudokuSolver::SudokuSolver(QWidget* parent) : QWidget(parent), ui(new Ui::SudokuSolver)
{
    ui->setupUi(this); // Sets up the user interface for the widget.


    QList<QList<QSpinBox*>> rows;
    for(int i = 0; i < 9; ++i)
    {
        rows.append(QList<QSpinBox*>());
    }

    QList<QList<QSpinBox*>> columns;
    for(int i = 0; i < 9; ++i)
    {
        columns.append(QList<QSpinBox*>());
    }

    // Sets the displayed value for each sudoku cell spinbox to be empty when the value is equal to zero.
    QList<QSpinBox*> cells = this->findChildren<QSpinBox*>();
    for(int i = 0; i < cells.size(); ++i)
    {
        cells[i]->setSpecialValueText(" ");


        rows[cells[i]->objectName()[5].digitValue()].append(cells[i]);
        columns[cells[i]->objectName()[4].digitValue()].append(cells[i]);
    }



    for(int i = 0; i < columns.count(); ++i)
    {
        for(int j = 0; j < columns[i].count(); ++j)
        {
            qDebug() << columns[i][j]->objectName();
        }
    }
}

SudokuSolver::~SudokuSolver()
{
    delete ui;
}
