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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SudokuSolver
{
public:
    QPushButton *solveButton;
    QFrame *line;
    QFrame *horizontalLine1;
    QWidget *widget;
    QVBoxLayout *region00;
    QHBoxLayout *horizontalLayout;
    QSpinBox *cell00;
    QSpinBox *cell10;
    QSpinBox *cell20;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *cell01;
    QSpinBox *cell11;
    QSpinBox *cell21;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *cell02;
    QSpinBox *cell12;
    QSpinBox *cell22;
    QFrame *horizontalLine1_2;
    QWidget *layoutWidget_3;
    QVBoxLayout *region10;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *cell30;
    QSpinBox *cell40;
    QSpinBox *cell50;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *cell31;
    QSpinBox *cell41;
    QSpinBox *cell51;
    QHBoxLayout *horizontalLayout_6;
    QSpinBox *cell32;
    QSpinBox *cell42;
    QSpinBox *cell52;
    QWidget *layoutWidget_4;
    QVBoxLayout *region20;
    QHBoxLayout *horizontalLayout_10;
    QSpinBox *cell60;
    QSpinBox *cell70;
    QSpinBox *cell80;
    QHBoxLayout *horizontalLayout_11;
    QSpinBox *cell61;
    QSpinBox *cell71;
    QSpinBox *cell81;
    QHBoxLayout *horizontalLayout_12;
    QSpinBox *cell62;
    QSpinBox *cell72;
    QSpinBox *cell82;
    QWidget *layoutWidget_5;
    QVBoxLayout *region01;
    QHBoxLayout *horizontalLayout_13;
    QSpinBox *cell03;
    QSpinBox *cell13;
    QSpinBox *cell23;
    QHBoxLayout *horizontalLayout_14;
    QSpinBox *cell04;
    QSpinBox *cell14;
    QSpinBox *cell24;
    QHBoxLayout *horizontalLayout_15;
    QSpinBox *cell05;
    QSpinBox *cell15;
    QSpinBox *cell25;
    QWidget *layoutWidget_6;
    QVBoxLayout *region11;
    QHBoxLayout *horizontalLayout_16;
    QSpinBox *cell33;
    QSpinBox *cell43;
    QSpinBox *cell53;
    QHBoxLayout *horizontalLayout_17;
    QSpinBox *cell34;
    QSpinBox *cell44;
    QSpinBox *cell54;
    QHBoxLayout *horizontalLayout_18;
    QSpinBox *cell35;
    QSpinBox *cell45;
    QSpinBox *cell55;
    QWidget *layoutWidget_7;
    QVBoxLayout *region21;
    QHBoxLayout *horizontalLayout_19;
    QSpinBox *cell63;
    QSpinBox *cell73;
    QSpinBox *cell83;
    QHBoxLayout *horizontalLayout_20;
    QSpinBox *cell64;
    QSpinBox *cell74;
    QSpinBox *cell84;
    QHBoxLayout *horizontalLayout_21;
    QSpinBox *cell65;
    QSpinBox *cell75;
    QSpinBox *cell85;
    QWidget *layoutWidget_8;
    QVBoxLayout *region02;
    QHBoxLayout *horizontalLayout_22;
    QSpinBox *cell06;
    QSpinBox *cell16;
    QSpinBox *cell26;
    QHBoxLayout *horizontalLayout_23;
    QSpinBox *cell07;
    QSpinBox *cell17;
    QSpinBox *cell27;
    QHBoxLayout *horizontalLayout_24;
    QSpinBox *cell08;
    QSpinBox *cell18;
    QSpinBox *cell28;
    QWidget *layoutWidget_9;
    QVBoxLayout *region12;
    QHBoxLayout *horizontalLayout_25;
    QSpinBox *cell36;
    QSpinBox *cell46;
    QSpinBox *cell56;
    QHBoxLayout *horizontalLayout_26;
    QSpinBox *cell37;
    QSpinBox *cell47;
    QSpinBox *cell57;
    QHBoxLayout *horizontalLayout_27;
    QSpinBox *cell38;
    QSpinBox *cell48;
    QSpinBox *cell58;
    QWidget *layoutWidget_10;
    QVBoxLayout *region22;
    QHBoxLayout *horizontalLayout_28;
    QSpinBox *cell66;
    QSpinBox *cell76;
    QSpinBox *cell86;
    QHBoxLayout *horizontalLayout_29;
    QSpinBox *cell67;
    QSpinBox *cell77;
    QSpinBox *cell87;
    QHBoxLayout *horizontalLayout_30;
    QSpinBox *cell68;
    QSpinBox *cell78;
    QSpinBox *cell88;
    QFrame *horizontalLine1_3;
    QFrame *horizontalLine1_4;
    QFrame *horizontalLine1_5;
    QFrame *horizontalLine1_6;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;

    void setupUi(QWidget *SudokuSolver)
    {
        if (SudokuSolver->objectName().isEmpty())
            SudokuSolver->setObjectName(QString::fromUtf8("SudokuSolver"));
        SudokuSolver->resize(800, 600);
        solveButton = new QPushButton(SudokuSolver);
        solveButton->setObjectName(QString::fromUtf8("solveButton"));
        solveButton->setGeometry(QRect(320, 410, 80, 21));
        line = new QFrame(SudokuSolver);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(180, 150, 111, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLine1 = new QFrame(SudokuSolver);
        horizontalLine1->setObjectName(QString::fromUtf8("horizontalLine1"));
        horizontalLine1->setGeometry(QRect(290, 60, 20, 91));
        horizontalLine1->setFrameShape(QFrame::VLine);
        horizontalLine1->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(SudokuSolver);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(180, 60, 109, 89));
        region00 = new QVBoxLayout(widget);
        region00->setObjectName(QString::fromUtf8("region00"));
        region00->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cell00 = new QSpinBox(widget);
        cell00->setObjectName(QString::fromUtf8("cell00"));
        cell00->setEnabled(true);
        cell00->setMaximum(9);
        cell00->setValue(0);

        horizontalLayout->addWidget(cell00);

        cell10 = new QSpinBox(widget);
        cell10->setObjectName(QString::fromUtf8("cell10"));
        cell10->setEnabled(true);
        cell10->setMaximum(9);
        cell10->setValue(0);

        horizontalLayout->addWidget(cell10);

        cell20 = new QSpinBox(widget);
        cell20->setObjectName(QString::fromUtf8("cell20"));
        cell20->setEnabled(true);
        cell20->setMaximum(9);
        cell20->setValue(0);

        horizontalLayout->addWidget(cell20);


        region00->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cell01 = new QSpinBox(widget);
        cell01->setObjectName(QString::fromUtf8("cell01"));
        cell01->setEnabled(true);
        cell01->setMaximum(9);
        cell01->setValue(0);

        horizontalLayout_2->addWidget(cell01);

        cell11 = new QSpinBox(widget);
        cell11->setObjectName(QString::fromUtf8("cell11"));
        cell11->setEnabled(true);
        cell11->setMaximum(9);
        cell11->setValue(0);

        horizontalLayout_2->addWidget(cell11);

        cell21 = new QSpinBox(widget);
        cell21->setObjectName(QString::fromUtf8("cell21"));
        cell21->setEnabled(true);
        cell21->setMaximum(9);
        cell21->setValue(0);

        horizontalLayout_2->addWidget(cell21);


        region00->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        cell02 = new QSpinBox(widget);
        cell02->setObjectName(QString::fromUtf8("cell02"));
        cell02->setEnabled(true);
        cell02->setMaximum(9);
        cell02->setValue(0);

        horizontalLayout_3->addWidget(cell02);

        cell12 = new QSpinBox(widget);
        cell12->setObjectName(QString::fromUtf8("cell12"));
        cell12->setEnabled(true);
        cell12->setMaximum(9);
        cell12->setValue(0);

        horizontalLayout_3->addWidget(cell12);

        cell22 = new QSpinBox(widget);
        cell22->setObjectName(QString::fromUtf8("cell22"));
        cell22->setEnabled(true);
        cell22->setMaximum(9);
        cell22->setValue(0);

        horizontalLayout_3->addWidget(cell22);


        region00->addLayout(horizontalLayout_3);

        horizontalLine1_2 = new QFrame(SudokuSolver);
        horizontalLine1_2->setObjectName(QString::fromUtf8("horizontalLine1_2"));
        horizontalLine1_2->setGeometry(QRect(420, 60, 20, 91));
        horizontalLine1_2->setFrameShape(QFrame::VLine);
        horizontalLine1_2->setFrameShadow(QFrame::Sunken);
        layoutWidget_3 = new QWidget(SudokuSolver);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(310, 60, 109, 89));
        region10 = new QVBoxLayout(layoutWidget_3);
        region10->setObjectName(QString::fromUtf8("region10"));
        region10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        cell30 = new QSpinBox(layoutWidget_3);
        cell30->setObjectName(QString::fromUtf8("cell30"));
        cell30->setEnabled(true);
        cell30->setMaximum(9);
        cell30->setValue(0);

        horizontalLayout_4->addWidget(cell30);

        cell40 = new QSpinBox(layoutWidget_3);
        cell40->setObjectName(QString::fromUtf8("cell40"));
        cell40->setEnabled(true);
        cell40->setMaximum(9);
        cell40->setValue(0);

        horizontalLayout_4->addWidget(cell40);

        cell50 = new QSpinBox(layoutWidget_3);
        cell50->setObjectName(QString::fromUtf8("cell50"));
        cell50->setEnabled(true);
        cell50->setMaximum(9);
        cell50->setValue(0);

        horizontalLayout_4->addWidget(cell50);


        region10->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        cell31 = new QSpinBox(layoutWidget_3);
        cell31->setObjectName(QString::fromUtf8("cell31"));
        cell31->setEnabled(true);
        cell31->setMaximum(9);
        cell31->setValue(0);

        horizontalLayout_5->addWidget(cell31);

        cell41 = new QSpinBox(layoutWidget_3);
        cell41->setObjectName(QString::fromUtf8("cell41"));
        cell41->setEnabled(true);
        cell41->setMaximum(9);
        cell41->setValue(0);

        horizontalLayout_5->addWidget(cell41);

        cell51 = new QSpinBox(layoutWidget_3);
        cell51->setObjectName(QString::fromUtf8("cell51"));
        cell51->setEnabled(true);
        cell51->setMaximum(9);
        cell51->setValue(0);

        horizontalLayout_5->addWidget(cell51);


        region10->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        cell32 = new QSpinBox(layoutWidget_3);
        cell32->setObjectName(QString::fromUtf8("cell32"));
        cell32->setEnabled(true);
        cell32->setMaximum(9);
        cell32->setValue(0);

        horizontalLayout_6->addWidget(cell32);

        cell42 = new QSpinBox(layoutWidget_3);
        cell42->setObjectName(QString::fromUtf8("cell42"));
        cell42->setEnabled(true);
        cell42->setMaximum(9);
        cell42->setValue(0);

        horizontalLayout_6->addWidget(cell42);

        cell52 = new QSpinBox(layoutWidget_3);
        cell52->setObjectName(QString::fromUtf8("cell52"));
        cell52->setEnabled(true);
        cell52->setMaximum(9);
        cell52->setValue(0);

        horizontalLayout_6->addWidget(cell52);


        region10->addLayout(horizontalLayout_6);

        layoutWidget_4 = new QWidget(SudokuSolver);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(440, 60, 109, 89));
        region20 = new QVBoxLayout(layoutWidget_4);
        region20->setObjectName(QString::fromUtf8("region20"));
        region20->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        cell60 = new QSpinBox(layoutWidget_4);
        cell60->setObjectName(QString::fromUtf8("cell60"));
        cell60->setEnabled(true);
        cell60->setMaximum(9);
        cell60->setValue(0);

        horizontalLayout_10->addWidget(cell60);

        cell70 = new QSpinBox(layoutWidget_4);
        cell70->setObjectName(QString::fromUtf8("cell70"));
        cell70->setEnabled(true);
        cell70->setMaximum(9);
        cell70->setValue(0);

        horizontalLayout_10->addWidget(cell70);

        cell80 = new QSpinBox(layoutWidget_4);
        cell80->setObjectName(QString::fromUtf8("cell80"));
        cell80->setEnabled(true);
        cell80->setMaximum(9);
        cell80->setValue(0);

        horizontalLayout_10->addWidget(cell80);


        region20->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        cell61 = new QSpinBox(layoutWidget_4);
        cell61->setObjectName(QString::fromUtf8("cell61"));
        cell61->setEnabled(true);
        cell61->setMaximum(9);
        cell61->setValue(0);

        horizontalLayout_11->addWidget(cell61);

        cell71 = new QSpinBox(layoutWidget_4);
        cell71->setObjectName(QString::fromUtf8("cell71"));
        cell71->setEnabled(true);
        cell71->setMaximum(9);
        cell71->setValue(0);

        horizontalLayout_11->addWidget(cell71);

        cell81 = new QSpinBox(layoutWidget_4);
        cell81->setObjectName(QString::fromUtf8("cell81"));
        cell81->setEnabled(true);
        cell81->setMaximum(9);
        cell81->setValue(0);

        horizontalLayout_11->addWidget(cell81);


        region20->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        cell62 = new QSpinBox(layoutWidget_4);
        cell62->setObjectName(QString::fromUtf8("cell62"));
        cell62->setEnabled(true);
        cell62->setMaximum(9);
        cell62->setValue(0);

        horizontalLayout_12->addWidget(cell62);

        cell72 = new QSpinBox(layoutWidget_4);
        cell72->setObjectName(QString::fromUtf8("cell72"));
        cell72->setEnabled(true);
        cell72->setMaximum(9);
        cell72->setValue(0);

        horizontalLayout_12->addWidget(cell72);

        cell82 = new QSpinBox(layoutWidget_4);
        cell82->setObjectName(QString::fromUtf8("cell82"));
        cell82->setEnabled(true);
        cell82->setMaximum(9);
        cell82->setValue(0);

        horizontalLayout_12->addWidget(cell82);


        region20->addLayout(horizontalLayout_12);

        layoutWidget_5 = new QWidget(SudokuSolver);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(180, 170, 109, 89));
        region01 = new QVBoxLayout(layoutWidget_5);
        region01->setObjectName(QString::fromUtf8("region01"));
        region01->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        cell03 = new QSpinBox(layoutWidget_5);
        cell03->setObjectName(QString::fromUtf8("cell03"));
        cell03->setEnabled(true);
        cell03->setMaximum(9);
        cell03->setValue(0);

        horizontalLayout_13->addWidget(cell03);

        cell13 = new QSpinBox(layoutWidget_5);
        cell13->setObjectName(QString::fromUtf8("cell13"));
        cell13->setEnabled(true);
        cell13->setMaximum(9);
        cell13->setValue(0);

        horizontalLayout_13->addWidget(cell13);

        cell23 = new QSpinBox(layoutWidget_5);
        cell23->setObjectName(QString::fromUtf8("cell23"));
        cell23->setEnabled(true);
        cell23->setMaximum(9);
        cell23->setValue(0);

        horizontalLayout_13->addWidget(cell23);


        region01->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        cell04 = new QSpinBox(layoutWidget_5);
        cell04->setObjectName(QString::fromUtf8("cell04"));
        cell04->setEnabled(true);
        cell04->setMaximum(9);
        cell04->setValue(0);

        horizontalLayout_14->addWidget(cell04);

        cell14 = new QSpinBox(layoutWidget_5);
        cell14->setObjectName(QString::fromUtf8("cell14"));
        cell14->setEnabled(true);
        cell14->setMaximum(9);
        cell14->setValue(0);

        horizontalLayout_14->addWidget(cell14);

        cell24 = new QSpinBox(layoutWidget_5);
        cell24->setObjectName(QString::fromUtf8("cell24"));
        cell24->setEnabled(true);
        cell24->setMaximum(9);
        cell24->setValue(0);

        horizontalLayout_14->addWidget(cell24);


        region01->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        cell05 = new QSpinBox(layoutWidget_5);
        cell05->setObjectName(QString::fromUtf8("cell05"));
        cell05->setEnabled(true);
        cell05->setMaximum(9);
        cell05->setValue(0);

        horizontalLayout_15->addWidget(cell05);

        cell15 = new QSpinBox(layoutWidget_5);
        cell15->setObjectName(QString::fromUtf8("cell15"));
        cell15->setEnabled(true);
        cell15->setMaximum(9);
        cell15->setValue(0);

        horizontalLayout_15->addWidget(cell15);

        cell25 = new QSpinBox(layoutWidget_5);
        cell25->setObjectName(QString::fromUtf8("cell25"));
        cell25->setEnabled(true);
        cell25->setMaximum(9);
        cell25->setValue(0);

        horizontalLayout_15->addWidget(cell25);


        region01->addLayout(horizontalLayout_15);

        layoutWidget_6 = new QWidget(SudokuSolver);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(310, 170, 109, 89));
        region11 = new QVBoxLayout(layoutWidget_6);
        region11->setObjectName(QString::fromUtf8("region11"));
        region11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        cell33 = new QSpinBox(layoutWidget_6);
        cell33->setObjectName(QString::fromUtf8("cell33"));
        cell33->setEnabled(true);
        cell33->setMaximum(9);
        cell33->setValue(0);

        horizontalLayout_16->addWidget(cell33);

        cell43 = new QSpinBox(layoutWidget_6);
        cell43->setObjectName(QString::fromUtf8("cell43"));
        cell43->setEnabled(true);
        cell43->setMaximum(9);
        cell43->setValue(0);

        horizontalLayout_16->addWidget(cell43);

        cell53 = new QSpinBox(layoutWidget_6);
        cell53->setObjectName(QString::fromUtf8("cell53"));
        cell53->setEnabled(true);
        cell53->setMaximum(9);
        cell53->setValue(0);

        horizontalLayout_16->addWidget(cell53);


        region11->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        cell34 = new QSpinBox(layoutWidget_6);
        cell34->setObjectName(QString::fromUtf8("cell34"));
        cell34->setEnabled(true);
        cell34->setMaximum(9);
        cell34->setValue(0);

        horizontalLayout_17->addWidget(cell34);

        cell44 = new QSpinBox(layoutWidget_6);
        cell44->setObjectName(QString::fromUtf8("cell44"));
        cell44->setEnabled(true);
        cell44->setMaximum(9);
        cell44->setValue(0);

        horizontalLayout_17->addWidget(cell44);

        cell54 = new QSpinBox(layoutWidget_6);
        cell54->setObjectName(QString::fromUtf8("cell54"));
        cell54->setEnabled(true);
        cell54->setMaximum(9);
        cell54->setValue(0);

        horizontalLayout_17->addWidget(cell54);


        region11->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        cell35 = new QSpinBox(layoutWidget_6);
        cell35->setObjectName(QString::fromUtf8("cell35"));
        cell35->setEnabled(true);
        cell35->setMaximum(9);
        cell35->setValue(0);

        horizontalLayout_18->addWidget(cell35);

        cell45 = new QSpinBox(layoutWidget_6);
        cell45->setObjectName(QString::fromUtf8("cell45"));
        cell45->setEnabled(true);
        cell45->setMaximum(9);
        cell45->setValue(0);

        horizontalLayout_18->addWidget(cell45);

        cell55 = new QSpinBox(layoutWidget_6);
        cell55->setObjectName(QString::fromUtf8("cell55"));
        cell55->setEnabled(true);
        cell55->setMaximum(9);
        cell55->setValue(0);

        horizontalLayout_18->addWidget(cell55);


        region11->addLayout(horizontalLayout_18);

        layoutWidget_7 = new QWidget(SudokuSolver);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(440, 170, 109, 89));
        region21 = new QVBoxLayout(layoutWidget_7);
        region21->setObjectName(QString::fromUtf8("region21"));
        region21->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        cell63 = new QSpinBox(layoutWidget_7);
        cell63->setObjectName(QString::fromUtf8("cell63"));
        cell63->setEnabled(true);
        cell63->setMaximum(9);
        cell63->setValue(0);

        horizontalLayout_19->addWidget(cell63);

        cell73 = new QSpinBox(layoutWidget_7);
        cell73->setObjectName(QString::fromUtf8("cell73"));
        cell73->setEnabled(true);
        cell73->setMaximum(9);
        cell73->setValue(0);

        horizontalLayout_19->addWidget(cell73);

        cell83 = new QSpinBox(layoutWidget_7);
        cell83->setObjectName(QString::fromUtf8("cell83"));
        cell83->setEnabled(true);
        cell83->setMaximum(9);
        cell83->setValue(0);

        horizontalLayout_19->addWidget(cell83);


        region21->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        cell64 = new QSpinBox(layoutWidget_7);
        cell64->setObjectName(QString::fromUtf8("cell64"));
        cell64->setEnabled(true);
        cell64->setMaximum(9);
        cell64->setValue(0);

        horizontalLayout_20->addWidget(cell64);

        cell74 = new QSpinBox(layoutWidget_7);
        cell74->setObjectName(QString::fromUtf8("cell74"));
        cell74->setEnabled(true);
        cell74->setMaximum(9);
        cell74->setValue(0);

        horizontalLayout_20->addWidget(cell74);

        cell84 = new QSpinBox(layoutWidget_7);
        cell84->setObjectName(QString::fromUtf8("cell84"));
        cell84->setEnabled(true);
        cell84->setMaximum(9);
        cell84->setValue(0);

        horizontalLayout_20->addWidget(cell84);


        region21->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        cell65 = new QSpinBox(layoutWidget_7);
        cell65->setObjectName(QString::fromUtf8("cell65"));
        cell65->setEnabled(true);
        cell65->setMaximum(9);
        cell65->setValue(0);

        horizontalLayout_21->addWidget(cell65);

        cell75 = new QSpinBox(layoutWidget_7);
        cell75->setObjectName(QString::fromUtf8("cell75"));
        cell75->setEnabled(true);
        cell75->setMaximum(9);
        cell75->setValue(0);

        horizontalLayout_21->addWidget(cell75);

        cell85 = new QSpinBox(layoutWidget_7);
        cell85->setObjectName(QString::fromUtf8("cell85"));
        cell85->setEnabled(true);
        cell85->setMaximum(9);
        cell85->setValue(0);

        horizontalLayout_21->addWidget(cell85);


        region21->addLayout(horizontalLayout_21);

        layoutWidget_8 = new QWidget(SudokuSolver);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(180, 280, 109, 89));
        region02 = new QVBoxLayout(layoutWidget_8);
        region02->setObjectName(QString::fromUtf8("region02"));
        region02->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        cell06 = new QSpinBox(layoutWidget_8);
        cell06->setObjectName(QString::fromUtf8("cell06"));
        cell06->setEnabled(true);
        cell06->setMaximum(9);
        cell06->setValue(0);

        horizontalLayout_22->addWidget(cell06);

        cell16 = new QSpinBox(layoutWidget_8);
        cell16->setObjectName(QString::fromUtf8("cell16"));
        cell16->setEnabled(true);
        cell16->setMaximum(9);
        cell16->setValue(0);

        horizontalLayout_22->addWidget(cell16);

        cell26 = new QSpinBox(layoutWidget_8);
        cell26->setObjectName(QString::fromUtf8("cell26"));
        cell26->setEnabled(true);
        cell26->setMaximum(9);
        cell26->setValue(0);

        horizontalLayout_22->addWidget(cell26);


        region02->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        cell07 = new QSpinBox(layoutWidget_8);
        cell07->setObjectName(QString::fromUtf8("cell07"));
        cell07->setEnabled(true);
        cell07->setMaximum(9);
        cell07->setValue(0);

        horizontalLayout_23->addWidget(cell07);

        cell17 = new QSpinBox(layoutWidget_8);
        cell17->setObjectName(QString::fromUtf8("cell17"));
        cell17->setEnabled(true);
        cell17->setMaximum(9);
        cell17->setValue(0);

        horizontalLayout_23->addWidget(cell17);

        cell27 = new QSpinBox(layoutWidget_8);
        cell27->setObjectName(QString::fromUtf8("cell27"));
        cell27->setEnabled(true);
        cell27->setMaximum(9);
        cell27->setValue(0);

        horizontalLayout_23->addWidget(cell27);


        region02->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        cell08 = new QSpinBox(layoutWidget_8);
        cell08->setObjectName(QString::fromUtf8("cell08"));
        cell08->setEnabled(true);
        cell08->setMaximum(9);
        cell08->setValue(0);

        horizontalLayout_24->addWidget(cell08);

        cell18 = new QSpinBox(layoutWidget_8);
        cell18->setObjectName(QString::fromUtf8("cell18"));
        cell18->setEnabled(true);
        cell18->setMaximum(9);
        cell18->setValue(0);

        horizontalLayout_24->addWidget(cell18);

        cell28 = new QSpinBox(layoutWidget_8);
        cell28->setObjectName(QString::fromUtf8("cell28"));
        cell28->setEnabled(true);
        cell28->setMaximum(9);
        cell28->setValue(0);

        horizontalLayout_24->addWidget(cell28);


        region02->addLayout(horizontalLayout_24);

        layoutWidget_9 = new QWidget(SudokuSolver);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(310, 280, 109, 89));
        region12 = new QVBoxLayout(layoutWidget_9);
        region12->setObjectName(QString::fromUtf8("region12"));
        region12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        cell36 = new QSpinBox(layoutWidget_9);
        cell36->setObjectName(QString::fromUtf8("cell36"));
        cell36->setEnabled(true);
        cell36->setMaximum(9);
        cell36->setValue(0);

        horizontalLayout_25->addWidget(cell36);

        cell46 = new QSpinBox(layoutWidget_9);
        cell46->setObjectName(QString::fromUtf8("cell46"));
        cell46->setEnabled(true);
        cell46->setMaximum(9);
        cell46->setValue(0);

        horizontalLayout_25->addWidget(cell46);

        cell56 = new QSpinBox(layoutWidget_9);
        cell56->setObjectName(QString::fromUtf8("cell56"));
        cell56->setEnabled(true);
        cell56->setMaximum(9);
        cell56->setValue(0);

        horizontalLayout_25->addWidget(cell56);


        region12->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        cell37 = new QSpinBox(layoutWidget_9);
        cell37->setObjectName(QString::fromUtf8("cell37"));
        cell37->setEnabled(true);
        cell37->setMaximum(9);
        cell37->setValue(0);

        horizontalLayout_26->addWidget(cell37);

        cell47 = new QSpinBox(layoutWidget_9);
        cell47->setObjectName(QString::fromUtf8("cell47"));
        cell47->setEnabled(true);
        cell47->setMaximum(9);
        cell47->setValue(0);

        horizontalLayout_26->addWidget(cell47);

        cell57 = new QSpinBox(layoutWidget_9);
        cell57->setObjectName(QString::fromUtf8("cell57"));
        cell57->setEnabled(true);
        cell57->setMaximum(9);
        cell57->setValue(0);

        horizontalLayout_26->addWidget(cell57);


        region12->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        cell38 = new QSpinBox(layoutWidget_9);
        cell38->setObjectName(QString::fromUtf8("cell38"));
        cell38->setEnabled(true);
        cell38->setMaximum(9);
        cell38->setValue(0);

        horizontalLayout_27->addWidget(cell38);

        cell48 = new QSpinBox(layoutWidget_9);
        cell48->setObjectName(QString::fromUtf8("cell48"));
        cell48->setEnabled(true);
        cell48->setMaximum(9);
        cell48->setValue(0);

        horizontalLayout_27->addWidget(cell48);

        cell58 = new QSpinBox(layoutWidget_9);
        cell58->setObjectName(QString::fromUtf8("cell58"));
        cell58->setEnabled(true);
        cell58->setMaximum(9);
        cell58->setValue(0);

        horizontalLayout_27->addWidget(cell58);


        region12->addLayout(horizontalLayout_27);

        layoutWidget_10 = new QWidget(SudokuSolver);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(440, 280, 109, 89));
        region22 = new QVBoxLayout(layoutWidget_10);
        region22->setObjectName(QString::fromUtf8("region22"));
        region22->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        cell66 = new QSpinBox(layoutWidget_10);
        cell66->setObjectName(QString::fromUtf8("cell66"));
        cell66->setEnabled(true);
        cell66->setMaximum(9);
        cell66->setValue(0);

        horizontalLayout_28->addWidget(cell66);

        cell76 = new QSpinBox(layoutWidget_10);
        cell76->setObjectName(QString::fromUtf8("cell76"));
        cell76->setEnabled(true);
        cell76->setMaximum(9);
        cell76->setValue(0);

        horizontalLayout_28->addWidget(cell76);

        cell86 = new QSpinBox(layoutWidget_10);
        cell86->setObjectName(QString::fromUtf8("cell86"));
        cell86->setEnabled(true);
        cell86->setMaximum(9);
        cell86->setValue(0);

        horizontalLayout_28->addWidget(cell86);


        region22->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        cell67 = new QSpinBox(layoutWidget_10);
        cell67->setObjectName(QString::fromUtf8("cell67"));
        cell67->setEnabled(true);
        cell67->setMaximum(9);
        cell67->setValue(0);

        horizontalLayout_29->addWidget(cell67);

        cell77 = new QSpinBox(layoutWidget_10);
        cell77->setObjectName(QString::fromUtf8("cell77"));
        cell77->setEnabled(true);
        cell77->setMaximum(9);
        cell77->setValue(0);

        horizontalLayout_29->addWidget(cell77);

        cell87 = new QSpinBox(layoutWidget_10);
        cell87->setObjectName(QString::fromUtf8("cell87"));
        cell87->setEnabled(true);
        cell87->setMaximum(9);
        cell87->setValue(0);

        horizontalLayout_29->addWidget(cell87);


        region22->addLayout(horizontalLayout_29);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        cell68 = new QSpinBox(layoutWidget_10);
        cell68->setObjectName(QString::fromUtf8("cell68"));
        cell68->setEnabled(true);
        cell68->setMaximum(9);
        cell68->setValue(0);

        horizontalLayout_30->addWidget(cell68);

        cell78 = new QSpinBox(layoutWidget_10);
        cell78->setObjectName(QString::fromUtf8("cell78"));
        cell78->setEnabled(true);
        cell78->setMaximum(9);
        cell78->setValue(0);

        horizontalLayout_30->addWidget(cell78);

        cell88 = new QSpinBox(layoutWidget_10);
        cell88->setObjectName(QString::fromUtf8("cell88"));
        cell88->setEnabled(true);
        cell88->setMaximum(9);
        cell88->setValue(0);

        horizontalLayout_30->addWidget(cell88);


        region22->addLayout(horizontalLayout_30);

        horizontalLine1_3 = new QFrame(SudokuSolver);
        horizontalLine1_3->setObjectName(QString::fromUtf8("horizontalLine1_3"));
        horizontalLine1_3->setGeometry(QRect(290, 170, 20, 91));
        horizontalLine1_3->setFrameShape(QFrame::VLine);
        horizontalLine1_3->setFrameShadow(QFrame::Sunken);
        horizontalLine1_4 = new QFrame(SudokuSolver);
        horizontalLine1_4->setObjectName(QString::fromUtf8("horizontalLine1_4"));
        horizontalLine1_4->setGeometry(QRect(420, 170, 20, 91));
        horizontalLine1_4->setFrameShape(QFrame::VLine);
        horizontalLine1_4->setFrameShadow(QFrame::Sunken);
        horizontalLine1_5 = new QFrame(SudokuSolver);
        horizontalLine1_5->setObjectName(QString::fromUtf8("horizontalLine1_5"));
        horizontalLine1_5->setGeometry(QRect(420, 280, 20, 91));
        horizontalLine1_5->setFrameShape(QFrame::VLine);
        horizontalLine1_5->setFrameShadow(QFrame::Sunken);
        horizontalLine1_6 = new QFrame(SudokuSolver);
        horizontalLine1_6->setObjectName(QString::fromUtf8("horizontalLine1_6"));
        horizontalLine1_6->setGeometry(QRect(290, 280, 20, 91));
        horizontalLine1_6->setFrameShape(QFrame::VLine);
        horizontalLine1_6->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(SudokuSolver);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(310, 150, 111, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(SudokuSolver);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(440, 150, 111, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(SudokuSolver);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(440, 260, 111, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(SudokuSolver);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(310, 260, 111, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(SudokuSolver);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(180, 260, 111, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        retranslateUi(SudokuSolver);

        QMetaObject::connectSlotsByName(SudokuSolver);
    } // setupUi

    void retranslateUi(QWidget *SudokuSolver)
    {
        SudokuSolver->setWindowTitle(QCoreApplication::translate("SudokuSolver", "SudokuSolver", nullptr));
        solveButton->setText(QCoreApplication::translate("SudokuSolver", "Solve", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SudokuSolver: public Ui_SudokuSolver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKUSOLVER_H
