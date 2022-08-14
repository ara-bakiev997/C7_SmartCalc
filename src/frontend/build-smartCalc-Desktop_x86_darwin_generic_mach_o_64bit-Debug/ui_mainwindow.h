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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *string;
    QPushButton *pushButton_1;
    QPushButton *pushButton_sum;
    QPushButton *pushButton_equal;
    QLabel *label;
    QLabel *label_2;
    QLabel *result;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_0;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_div;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_openBracket;
    QPushButton *pushButton_closeBracket;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(705, 439);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        string = new QLabel(centralwidget);
        string->setObjectName(QString::fromUtf8("string"));
        string->setGeometry(QRect(70, 40, 321, 41));
        string->setStyleSheet(QString::fromUtf8(""));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 340, 100, 32));
        pushButton_sum = new QPushButton(centralwidget);
        pushButton_sum->setObjectName(QString::fromUtf8("pushButton_sum"));
        pushButton_sum->setGeometry(QRect(330, 370, 100, 32));
        pushButton_sum->setStyleSheet(QString::fromUtf8(""));
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(430, 370, 100, 32));
        pushButton_equal->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 58, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 58, 16));
        result = new QLabel(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(70, 0, 321, 41));
        result->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 340, 100, 32));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 340, 100, 32));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 310, 100, 32));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 310, 100, 32));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(230, 310, 100, 32));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 280, 100, 32));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(120, 280, 100, 32));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(230, 280, 100, 32));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(10, 370, 211, 32));
        pushButton_sub = new QPushButton(centralwidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        pushButton_sub->setGeometry(QRect(330, 340, 100, 32));
        pushButton_sub->setStyleSheet(QString::fromUtf8(""));
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setGeometry(QRect(430, 280, 100, 32));
        pushButton_AC->setStyleSheet(QString::fromUtf8(""));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(230, 370, 100, 32));
        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(330, 310, 100, 32));
        pushButton_mul->setStyleSheet(QString::fromUtf8(""));
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(330, 280, 100, 32));
        pushButton_div->setStyleSheet(QString::fromUtf8(""));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(430, 340, 100, 32));
        pushButton_mod->setStyleSheet(QString::fromUtf8(""));
        pushButton_openBracket = new QPushButton(centralwidget);
        pushButton_openBracket->setObjectName(QString::fromUtf8("pushButton_openBracket"));
        pushButton_openBracket->setGeometry(QRect(10, 250, 100, 32));
        pushButton_closeBracket = new QPushButton(centralwidget);
        pushButton_closeBracket->setObjectName(QString::fromUtf8("pushButton_closeBracket"));
        pushButton_closeBracket->setGeometry(QRect(120, 250, 100, 32));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        string->setText(QString());
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "String", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "result", nullptr));
        result->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_openBracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_closeBracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
