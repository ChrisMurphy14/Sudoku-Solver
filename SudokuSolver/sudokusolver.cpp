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

    // Creates 9 empty lists into which each cell will be appended to create multi-dimensional lists representing the rows, columns, and regions of the sudoku grid.
    for(int i = 0; i < 9; ++i)
    {
        rows.append(QList<QSpinBox*>());
        columns.append(QList<QSpinBox*>());
        regions.append(QList<QSpinBox*>());
    }
    QList<QSpinBox*> cells = this->findChildren<QSpinBox*>();
    for(int i = 0; i < cells.size(); ++i)
    {
        cells[i]->setSpecialValueText(" "); // Sets the displayed value for each sudoku cell spinbox to be empty when the value is equal to zero.

        // Adds each cell into the row, column, and region lists according to the coordinates included within its name (e.g. "cell01" is column 0, row 1).
        int cellRow = cells[i]->objectName()[5].digitValue();
        int cellColumn = cells[i]->objectName()[4].digitValue();
        rows[cellRow].append(cells[i]);
        columns[cellColumn].append(cells[i]);
        regions[((cellColumn - cellColumn % 3) / 3) + (cellRow - cellRow % 3)].append(cells[i]);
    }

    for(int i = 0; i < regions.count(); ++i)
    {
        qDebug() << "region " << i << ":";
        for(int j = 0; j < regions[i].count(); ++j)
        {
            qDebug() << regions[i][j]->objectName();
        }
    }
}

SudokuSolver::~SudokuSolver()
{
    delete ui;
}
