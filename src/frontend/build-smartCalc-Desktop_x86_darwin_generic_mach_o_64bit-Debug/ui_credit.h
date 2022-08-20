/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *annuit;
    QRadioButton *diff;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_sum;
    QLineEdit *lineEdit_sum_credit;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_limit;
    QLineEdit *lineEdit_limit;
    QVBoxLayout *verticalLayout;
    QLabel *label_percent;
    QLineEdit *lineEdit_percent;
    QVBoxLayout *verticalLayout_5;
    QPushButton *calculate;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_pay;
    QListWidget *listWidget_pay;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_overpayment;
    QLineEdit *lineEdit_overpayment;
    QLabel *label_rub;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_total_sum;
    QLineEdit *lineEdit_total_sum;
    QLabel *label_rub_2;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QString::fromUtf8("SecondWindow"));
        SecondWindow->resize(525, 600);
        verticalLayout_7 = new QVBoxLayout(SecondWindow);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        annuit = new QRadioButton(SecondWindow);
        annuit->setObjectName(QString::fromUtf8("annuit"));

        verticalLayout_6->addWidget(annuit);

        diff = new QRadioButton(SecondWindow);
        diff->setObjectName(QString::fromUtf8("diff"));

        verticalLayout_6->addWidget(diff);


        verticalLayout_7->addLayout(verticalLayout_6);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_sum = new QLabel(SecondWindow);
        label_sum->setObjectName(QString::fromUtf8("label_sum"));

        verticalLayout_4->addWidget(label_sum);

        lineEdit_sum_credit = new QLineEdit(SecondWindow);
        lineEdit_sum_credit->setObjectName(QString::fromUtf8("lineEdit_sum_credit"));
        lineEdit_sum_credit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(lineEdit_sum_credit);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_limit = new QLabel(SecondWindow);
        label_limit->setObjectName(QString::fromUtf8("label_limit"));

        horizontalLayout->addWidget(label_limit);


        verticalLayout_2->addLayout(horizontalLayout);

        lineEdit_limit = new QLineEdit(SecondWindow);
        lineEdit_limit->setObjectName(QString::fromUtf8("lineEdit_limit"));
        lineEdit_limit->setCursorPosition(0);
        lineEdit_limit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(lineEdit_limit);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_percent = new QLabel(SecondWindow);
        label_percent->setObjectName(QString::fromUtf8("label_percent"));
        label_percent->setEnabled(true);

        verticalLayout->addWidget(label_percent);

        lineEdit_percent = new QLineEdit(SecondWindow);
        lineEdit_percent->setObjectName(QString::fromUtf8("lineEdit_percent"));
        lineEdit_percent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_percent->setCursorMoveStyle(Qt::LogicalMoveStyle);

        verticalLayout->addWidget(lineEdit_percent);


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);


        verticalLayout_7->addLayout(gridLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        calculate = new QPushButton(SecondWindow);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        calculate->setMinimumSize(QSize(150, 50));
        calculate->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 197, 83);"));
        calculate->setCheckable(false);
        calculate->setChecked(false);

        verticalLayout_5->addWidget(calculate);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_pay = new QLabel(SecondWindow);
        label_pay->setObjectName(QString::fromUtf8("label_pay"));

        verticalLayout_3->addWidget(label_pay);

        listWidget_pay = new QListWidget(SecondWindow);
        listWidget_pay->setObjectName(QString::fromUtf8("listWidget_pay"));
        listWidget_pay->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"font: italic 14pt \"Helvetica\";"));

        verticalLayout_3->addWidget(listWidget_pay);


        verticalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_7->addLayout(verticalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_overpayment = new QLabel(SecondWindow);
        label_overpayment->setObjectName(QString::fromUtf8("label_overpayment"));
        label_overpayment->setEnabled(true);
        label_overpayment->setStyleSheet(QString::fromUtf8("color: rgb(236, 105, 94);"));

        horizontalLayout_3->addWidget(label_overpayment);

        lineEdit_overpayment = new QLineEdit(SecondWindow);
        lineEdit_overpayment->setObjectName(QString::fromUtf8("lineEdit_overpayment"));
        lineEdit_overpayment->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_overpayment);

        label_rub = new QLabel(SecondWindow);
        label_rub->setObjectName(QString::fromUtf8("label_rub"));
        label_rub->setEnabled(true);

        horizontalLayout_3->addWidget(label_rub);


        verticalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_total_sum = new QLabel(SecondWindow);
        label_total_sum->setObjectName(QString::fromUtf8("label_total_sum"));
        label_total_sum->setEnabled(true);
        QFont font;
        font.setBold(true);
        label_total_sum->setFont(font);

        horizontalLayout_2->addWidget(label_total_sum);

        lineEdit_total_sum = new QLineEdit(SecondWindow);
        lineEdit_total_sum->setObjectName(QString::fromUtf8("lineEdit_total_sum"));
        lineEdit_total_sum->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_total_sum);

        label_rub_2 = new QLabel(SecondWindow);
        label_rub_2->setObjectName(QString::fromUtf8("label_rub_2"));
        label_rub_2->setEnabled(true);

        horizontalLayout_2->addWidget(label_rub_2);


        verticalLayout_7->addLayout(horizontalLayout_2);


        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "Dialog", nullptr));
        annuit->setText(QCoreApplication::translate("SecondWindow", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\320\275\321\202\320\275\321\213\320\271", nullptr));
        diff->setText(QCoreApplication::translate("SecondWindow", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        label_sum->setText(QCoreApplication::translate("SecondWindow", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260 \321\200\321\203\320\261.", nullptr));
        lineEdit_sum_credit->setPlaceholderText(QCoreApplication::translate("SecondWindow", "0", nullptr));
        label_limit->setText(QCoreApplication::translate("SecondWindow", "\320\241\321\200\320\276\320\272 \320\262 \320\274\320\265\321\201\321\217\321\206\320\260\321\205", nullptr));
        lineEdit_limit->setPlaceholderText(QCoreApplication::translate("SecondWindow", "0", nullptr));
        label_percent->setText(QCoreApplication::translate("SecondWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260 %", nullptr));
        lineEdit_percent->setPlaceholderText(QCoreApplication::translate("SecondWindow", "0", nullptr));
        calculate->setText(QCoreApplication::translate("SecondWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_pay->setText(QCoreApplication::translate("SecondWindow", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266, \321\200\321\203\320\261.", nullptr));
        label_overpayment->setText(QCoreApplication::translate("SecondWindow", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203", nullptr));
        label_rub->setText(QCoreApplication::translate("SecondWindow", "\321\200\321\203\320\261.", nullptr));
        label_total_sum->setText(QCoreApplication::translate("SecondWindow", "\320\230\321\202\320\276\320\263\320\276\320\262\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260 \320\267\320\260 \320\262\320\265\321\201\321\214 \320\277\320\265\321\200\320\270\320\276\320\264", nullptr));
        label_rub_2->setText(QCoreApplication::translate("SecondWindow", "\321\200\321\203\320\261.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
