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
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *X_value;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_delete;
    QPushButton *pushButton;
    QDoubleSpinBox *doubleSpinBox_X_value;
    QGridLayout *gridLayout;
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
    QLineEdit *string;
    QLineEdit *result;
    QCustomPlot *widget;
    QLabel *Xmin;
    QDoubleSpinBox *doubleSpinBox_Xmin;
    QDoubleSpinBox *doubleSpinBox_Xmax;
    QLabel *Xmax;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(918, 524);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 150, 71, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 220, 81, 41));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 270, 517, 170));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        X_value = new QLabel(layoutWidget);
        X_value->setObjectName(QString::fromUtf8("X_value"));

        gridLayout_3->addWidget(X_value, 1, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_AC = new QPushButton(layoutWidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(pushButton_AC, 0, 0, 1, 1);

        pushButton_delete = new QPushButton(layoutWidget);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(pushButton_delete, 0, 1, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 2);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 1, 2);

        doubleSpinBox_X_value = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_X_value->setObjectName(QString::fromUtf8("doubleSpinBox_X_value"));

        gridLayout_3->addWidget(doubleSpinBox_X_value, 1, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_sqrt = new QPushButton(layoutWidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));

        gridLayout->addWidget(pushButton_sqrt, 0, 0, 1, 1);

        pushButton_mod = new QPushButton(layoutWidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_mod, 0, 1, 1, 1);

        pushButton_x = new QPushButton(layoutWidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));

        gridLayout->addWidget(pushButton_x, 0, 2, 1, 1);

        pushButton_openBracket = new QPushButton(layoutWidget);
        pushButton_openBracket->setObjectName(QString::fromUtf8("pushButton_openBracket"));

        gridLayout->addWidget(pushButton_openBracket, 0, 3, 1, 1);

        pushButton_closeBracket = new QPushButton(layoutWidget);
        pushButton_closeBracket->setObjectName(QString::fromUtf8("pushButton_closeBracket"));

        gridLayout->addWidget(pushButton_closeBracket, 0, 4, 1, 1);

        pushButton_div = new QPushButton(layoutWidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_div, 0, 5, 1, 1);

        pushButton_ln = new QPushButton(layoutWidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));

        gridLayout->addWidget(pushButton_ln, 1, 0, 1, 1);

        pushButton_log = new QPushButton(layoutWidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));

        gridLayout->addWidget(pushButton_log, 1, 1, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 1, 2, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 1, 3, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 1, 4, 1, 1);

        pushButton_mul = new QPushButton(layoutWidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_mul, 1, 5, 1, 1);

        pushButton_atan = new QPushButton(layoutWidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));

        gridLayout->addWidget(pushButton_atan, 2, 0, 1, 1);

        pushButton_tan = new QPushButton(layoutWidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));

        gridLayout->addWidget(pushButton_tan, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 2, 2, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 2, 3, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 2, 4, 1, 1);

        pushButton_sub = new QPushButton(layoutWidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        pushButton_sub->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_sub, 2, 5, 1, 1);

        pushButton_acos = new QPushButton(layoutWidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));

        gridLayout->addWidget(pushButton_acos, 3, 0, 1, 1);

        pushButton_cos = new QPushButton(layoutWidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));

        gridLayout->addWidget(pushButton_cos, 3, 1, 1, 1);

        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));

        gridLayout->addWidget(pushButton_1, 3, 2, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 3, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 3, 4, 1, 1);

        pushButton_sum = new QPushButton(layoutWidget);
        pushButton_sum->setObjectName(QString::fromUtf8("pushButton_sum"));
        pushButton_sum->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_sum, 3, 5, 1, 1);

        pushButton_asin = new QPushButton(layoutWidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));

        gridLayout->addWidget(pushButton_asin, 4, 0, 1, 1);

        pushButton_sin = new QPushButton(layoutWidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));

        gridLayout->addWidget(pushButton_sin, 4, 1, 1, 1);

        pushButton_pow = new QPushButton(layoutWidget);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));

        gridLayout->addWidget(pushButton_pow, 4, 2, 1, 1);

        pushButton_0 = new QPushButton(layoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));

        gridLayout->addWidget(pushButton_0, 4, 3, 1, 1);

        pushButton_dot = new QPushButton(layoutWidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));

        gridLayout->addWidget(pushButton_dot, 4, 4, 1, 1);

        pushButton_equal = new QPushButton(layoutWidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_equal, 4, 5, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 2, 1);

        string = new QLineEdit(centralwidget);
        string->setObjectName(QString::fromUtf8("string"));
        string->setGeometry(QRect(120, 150, 371, 41));
        string->setReadOnly(false);
        result = new QLineEdit(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(120, 220, 371, 41));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(580, 250, 291, 211));
        Xmin = new QLabel(centralwidget);
        Xmin->setObjectName(QString::fromUtf8("Xmin"));
        Xmin->setGeometry(QRect(560, 70, 31, 16));
        doubleSpinBox_Xmin = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_Xmin->setObjectName(QString::fromUtf8("doubleSpinBox_Xmin"));
        doubleSpinBox_Xmin->setGeometry(QRect(620, 70, 56, 21));
        doubleSpinBox_Xmin->setMinimum(-99999.000000000000000);
        doubleSpinBox_Xmax = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_Xmax->setObjectName(QString::fromUtf8("doubleSpinBox_Xmax"));
        doubleSpinBox_Xmax->setGeometry(QRect(620, 40, 56, 21));
        doubleSpinBox_Xmax->setMinimum(-999.000000000000000);
        Xmax = new QLabel(centralwidget);
        Xmax->setObjectName(QString::fromUtf8("Xmax"));
        Xmax->setGeometry(QRect(560, 40, 34, 16));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "String", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "result", nullptr));
        X_value->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("MainWindow", "<x", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Plot graph", nullptr));
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
        Xmin->setText(QCoreApplication::translate("MainWindow", "Xmin", nullptr));
        Xmax->setText(QCoreApplication::translate("MainWindow", "Xmax", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
