////////////////////////////////////////
// Author:              Chris Murphy
// Date created:        08.06.20
// Date last edited:    08.06.20
////////////////////////////////////////
#include "sudokucell.h"

SudokuCell::SudokuCell() {}
SudokuCell::SudokuCell(QSpinBox* spinBox, int rowIndex, int columnIndex, int regionIndex)
{
    Q_ASSERT(rowIndex >= 0 && rowIndex <= 8 && columnIndex >= 0 && columnIndex <= 8 && regionIndex >= 0 && regionIndex <= 8);

    this->spinBox = spinBox;
    spinBox->setSpecialValueText(" "); // Sets the displayed value for the spinbox to be empty when the value is equal to zero.

    this->rowIndex = rowIndex;
    this->columnIndex = columnIndex;
    this->regionIndex = regionIndex;
}

int SudokuCell::getValue() const
{
    return spinBox->value();
}

int SudokuCell::getRowIndex() const
{
    return rowIndex;
}

int SudokuCell::getColumnIndex() const
{
    return columnIndex;
}

int SudokuCell::getRegionIndex() const
{
    return regionIndex;
}

void SudokuCell::setValue(int newValue)
{
    Q_ASSERT(newValue >= 0 && newValue <= 9);

    spinBox->setValue(newValue);
}
