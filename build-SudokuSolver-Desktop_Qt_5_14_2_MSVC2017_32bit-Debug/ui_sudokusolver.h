/********************************************************************************
** Form generated from reading UI file 'sudokusolver.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOKUSOLVER_H
#define UI_SUDOKUSOLVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SudokuSolver
{
public:

    void setupUi(QWidget *SudokuSolver)
    {
        if (SudokuSolver->objectName().isEmpty())
            SudokuSolver->setObjectName(QString::fromUtf8("SudokuSolver"));
        SudokuSolver->resize(800, 600);

        retranslateUi(SudokuSolver);

        QMetaObject::connectSlotsByName(SudokuSolver);
    } // setupUi

    void retranslateUi(QWidget *SudokuSolver)
    {
        SudokuSolver->setWindowTitle(QCoreApplication::translate("SudokuSolver", "SudokuSolver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SudokuSolver: public Ui_SudokuSolver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKUSOLVER_H
