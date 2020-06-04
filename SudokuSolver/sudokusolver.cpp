////////////////////////////////////////
// Author:              Chris Murphy
// Date created:        04.06.20
// Date last edited:    04.06.20
////////////////////////////////////////
#include "sudokusolver.h"
#include "ui_sudokusolver.h"

SudokuSolver::SudokuSolver(QWidget* parent) : QWidget(parent), ui(new Ui::SudokuSolver)
{
    ui->setupUi(this); // Sets up the user interface for the widget.
}

SudokuSolver::~SudokuSolver()
{
    delete ui;
}
