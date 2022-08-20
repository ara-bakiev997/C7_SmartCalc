/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCustomPlot *widget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_x;
    QPushButton *pushButton_openBracket;
    QPushButton *pushButton_closeBracket;
    QPushButton *pushButton_div;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_log;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_sum;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_0;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_delete;
    QLineEdit *string;
    QLineEdit *result;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Xmin;
    QDoubleSpinBox *doubleSpinBox_Xmin;
    QHBoxLayout *horizontalLayout;
    QLabel *Xmax;
    QDoubleSpinBox *doubleSpinBox_Xmax;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_Credit;
    QPushButton *pushButton_Deposit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(780, 351);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(450, 20, 311, 271));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 24, 428, 269));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_AC = new QPushButton(layoutWidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_AC, 1, 5, 1, 1);

        pushButton_sqrt = new QPushButton(layoutWidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_sqrt, 2, 0, 1, 1);

        pushButton_mod = new QPushButton(layoutWidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_mod, 2, 1, 1, 1);

        pushButton_x = new QPushButton(layoutWidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_x, 2, 2, 1, 1);

        pushButton_openBracket = new QPushButton(layoutWidget);
        pushButton_openBracket->setObjectName(QString::fromUtf8("pushButton_openBracket"));
        pushButton_openBracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_openBracket, 2, 3, 1, 1);

        pushButton_closeBracket = new QPushButton(layoutWidget);
        pushButton_closeBracket->setObjectName(QString::fromUtf8("pushButton_closeBracket"));
        pushButton_closeBracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_closeBracket, 2, 4, 1, 1);

        pushButton_div = new QPushButton(layoutWidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_div, 2, 5, 1, 1);

        pushButton_ln = new QPushButton(layoutWidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_ln, 3, 0, 1, 1);

        pushButton_log = new QPushButton(layoutWidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_log, 3, 1, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));

        gridLayout->addWidget(pushButton_7, 3, 2, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));

        gridLayout->addWidget(pushButton_8, 3, 3, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));

        gridLayout->addWidget(pushButton_9, 3, 4, 1, 1);

        pushButton_mul = new QPushButton(layoutWidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_mul, 3, 5, 1, 1);

        pushButton_atan = new QPushButton(layoutWidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_atan, 4, 0, 1, 1);

        pushButton_tan = new QPushButton(layoutWidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_tan, 4, 1, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));

        gridLayout->addWidget(pushButton_4, 4, 2, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));

        gridLayout->addWidget(pushButton_5, 4, 3, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));

        gridLayout->addWidget(pushButton_6, 4, 4, 1, 1);

        pushButton_sub = new QPushButton(layoutWidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        pushButton_sub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_sub, 4, 5, 1, 1);

        pushButton_acos = new QPushButton(layoutWidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_acos, 5, 0, 1, 1);

        pushButton_cos = new QPushButton(layoutWidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_cos, 5, 1, 1, 1);

        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));

        gridLayout->addWidget(pushButton_1, 5, 2, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));

        gridLayout->addWidget(pushButton_2, 5, 3, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));

        gridLayout->addWidget(pushButton_3, 5, 4, 1, 1);

        pushButton_sum = new QPushButton(layoutWidget);
        pushButton_sum->setObjectName(QString::fromUtf8("pushButton_sum"));
        pushButton_sum->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_sum, 5, 5, 1, 1);

        pushButton_asin = new QPushButton(layoutWidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_asin, 6, 0, 1, 1);

        pushButton_sin = new QPushButton(layoutWidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_sin, 6, 1, 1, 1);

        pushButton_pow = new QPushButton(layoutWidget);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_pow, 6, 2, 1, 1);

        pushButton_0 = new QPushButton(layoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));

        gridLayout->addWidget(pushButton_0, 6, 3, 1, 1);

        pushButton_dot = new QPushButton(layoutWidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_dot, 6, 4, 1, 1);

        pushButton_equal = new QPushButton(layoutWidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_equal, 6, 5, 1, 1);

        pushButton_delete = new QPushButton(layoutWidget);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_delete, 0, 5, 1, 1);

        string = new QLineEdit(layoutWidget);
        string->setObjectName(QString::fromUtf8("string"));
        string->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        string->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        string->setReadOnly(false);

        gridLayout->addWidget(string, 0, 0, 1, 5);

        result = new QLineEdit(layoutWidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 18pt \".AppleSystemUIFont\";\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(result, 1, 0, 1, 5);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(412, 300, 351, 37));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(pushButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Xmin = new QLabel(layoutWidget1);
        Xmin->setObjectName(QString::fromUtf8("Xmin"));

        horizontalLayout_2->addWidget(Xmin);

        doubleSpinBox_Xmin = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_Xmin->setObjectName(QString::fromUtf8("doubleSpinBox_Xmin"));
        doubleSpinBox_Xmin->setStyleSheet(QString::fromUtf8("font: 13pt \".AppleSystemUIFont\";"));
        doubleSpinBox_Xmin->setMinimum(-999.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox_Xmin);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Xmax = new QLabel(layoutWidget1);
        Xmax->setObjectName(QString::fromUtf8("Xmax"));

        horizontalLayout->addWidget(Xmax);

        doubleSpinBox_Xmax = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_Xmax->setObjectName(QString::fromUtf8("doubleSpinBox_Xmax"));
        doubleSpinBox_Xmax->setStyleSheet(QString::fromUtf8("font: 13pt \".AppleSystemUIFont\";"));
        doubleSpinBox_Xmax->setMinimum(-999.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox_Xmax);


        horizontalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 300, 386, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_Credit = new QPushButton(layoutWidget2);
        pushButton_Credit->setObjectName(QString::fromUtf8("pushButton_Credit"));

        horizontalLayout_5->addWidget(pushButton_Credit);

        pushButton_Deposit = new QPushButton(layoutWidget2);
        pushButton_Deposit->setObjectName(QString::fromUtf8("pushButton_Deposit"));

        horizontalLayout_5->addWidget(pushButton_Deposit);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_openBracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_closeBracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        string->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        result->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Plot graph", nullptr));
        Xmin->setText(QCoreApplication::translate("MainWindow", "Xmin", nullptr));
        Xmax->setText(QCoreApplication::translate("MainWindow", "Xmax", nullptr));
        pushButton_Credit->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        pushButton_Deposit->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
