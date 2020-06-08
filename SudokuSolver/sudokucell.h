////////////////////////////////////////
// Author:              Chris Murphy
// Date created:        08.06.20
// Date last edited:    08.06.20
////////////////////////////////////////
#ifndef SUDOKUCELL_H
#define SUDOKUCELL_H
#include <QSpinBox>

// The class used to handle each individual cell in the sudoku grid by storing the spinbox as well as the lists representing the row, column, and region the cell belongs to.
class SudokuCell
{
public:
    //bool isClueCell; // Used to tell whether the cell is a 'clue' cell that starts the solving process already filled.

    SudokuCell();
    SudokuCell(QSpinBox* spinBox, int rowIndex, int columnIndex, int regionIndex);

    // Returns the current value of the sudoku cell spinbox.
    int getValue() const;

    // Returns the zero-based index of the row which the cell is a part of within the sudoku grid.
    int getRowIndex() const;

    // Returns the zero-based index of the column which the cell is a part of within the sudoku grid.
    int getColumnIndex() const;

    // Returns the zero-based index of the region (3x3 grid) which the cell is a part of within the sudoku grid.
    int getRegionIndex() const;

    // Sets the current value of the sudoku cell spinbox - must be a value between 0 and 9.
    void setValue(int newValue);

private:
    QSpinBox* spinBox; // The spinbox representing the cell displayed on the application window.
    int rowIndex; // The index of the row within the sudoku grid which this cell is a part of (0 - 8).
    int columnIndex; // The index of the column within the sudoku grid which this cell is a part of (0 - 8).
    int regionIndex; // The index of the region (3x3 grid) within the sudoku grid which this cell is a part of (0 - 8).
};

#endif
