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

class Ui_credit
{
public:
    QVBoxLayout *verticalLayout_33;
    QVBoxLayout *verticalLayout_25;
    QRadioButton *annuit;
    QRadioButton *diff;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_26;
    QLabel *label_sum;
    QLineEdit *lineEdit_sum_credit;
    QVBoxLayout *verticalLayout_27;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_limit;
    QLineEdit *lineEdit_limit;
    QVBoxLayout *verticalLayout_28;
    QLabel *label_percent;
    QLineEdit *lineEdit_percent;
    QVBoxLayout *verticalLayout_31;
    QPushButton *calculate;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_32;
    QLabel *label_pay;
    QListWidget *listWidget_pay;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_overpayment;
    QLineEdit *lineEdit_overpayment;
    QLabel *label_rub;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_total_sum;
    QLineEdit *lineEdit_total_sum;
    QLabel *label_rub_2;

    void setupUi(QDialog *credit)
    {
        if (credit->objectName().isEmpty())
            credit->setObjectName(QString::fromUtf8("credit"));
        credit->resize(634, 637);
        verticalLayout_33 = new QVBoxLayout(credit);
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        annuit = new QRadioButton(credit);
        annuit->setObjectName(QString::fromUtf8("annuit"));

        verticalLayout_25->addWidget(annuit);

        diff = new QRadioButton(credit);
        diff->setObjectName(QString::fromUtf8("diff"));

        verticalLayout_25->addWidget(diff);


        verticalLayout_33->addLayout(verticalLayout_25);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        label_sum = new QLabel(credit);
        label_sum->setObjectName(QString::fromUtf8("label_sum"));

        verticalLayout_26->addWidget(label_sum);

        lineEdit_sum_credit = new QLineEdit(credit);
        lineEdit_sum_credit->setObjectName(QString::fromUtf8("lineEdit_sum_credit"));
        lineEdit_sum_credit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_26->addWidget(lineEdit_sum_credit);


        gridLayout_5->addLayout(verticalLayout_26, 0, 0, 1, 1);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_limit = new QLabel(credit);
        label_limit->setObjectName(QString::fromUtf8("label_limit"));

        horizontalLayout_13->addWidget(label_limit);


        verticalLayout_27->addLayout(horizontalLayout_13);

        lineEdit_limit = new QLineEdit(credit);
        lineEdit_limit->setObjectName(QString::fromUtf8("lineEdit_limit"));
        lineEdit_limit->setCursorPosition(0);
        lineEdit_limit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_27->addWidget(lineEdit_limit);


        gridLayout_5->addLayout(verticalLayout_27, 0, 1, 1, 1);

        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        label_percent = new QLabel(credit);
        label_percent->setObjectName(QString::fromUtf8("label_percent"));
        label_percent->setEnabled(true);

        verticalLayout_28->addWidget(label_percent);

        lineEdit_percent = new QLineEdit(credit);
        lineEdit_percent->setObjectName(QString::fromUtf8("lineEdit_percent"));
        lineEdit_percent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_percent->setCursorMoveStyle(Qt::LogicalMoveStyle);

        verticalLayout_28->addWidget(lineEdit_percent);


        gridLayout_5->addLayout(verticalLayout_28, 0, 2, 1, 1);


        verticalLayout_33->addLayout(gridLayout_5);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        calculate = new QPushButton(credit);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        calculate->setMinimumSize(QSize(150, 50));
        calculate->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 197, 83);"));
        calculate->setCheckable(false);
        calculate->setChecked(false);

        verticalLayout_31->addWidget(calculate);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_31->addItem(verticalSpacer_6);

        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        label_pay = new QLabel(credit);
        label_pay->setObjectName(QString::fromUtf8("label_pay"));

        verticalLayout_32->addWidget(label_pay);

        listWidget_pay = new QListWidget(credit);
        listWidget_pay->setObjectName(QString::fromUtf8("listWidget_pay"));
        listWidget_pay->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";\n"
"font: italic 14pt \"Helvetica\";"));

        verticalLayout_32->addWidget(listWidget_pay);


        verticalLayout_31->addLayout(verticalLayout_32);


        verticalLayout_33->addLayout(verticalLayout_31);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_overpayment = new QLabel(credit);
        label_overpayment->setObjectName(QString::fromUtf8("label_overpayment"));
        label_overpayment->setEnabled(true);
        label_overpayment->setStyleSheet(QString::fromUtf8("color: rgb(236, 105, 94);"));

        horizontalLayout_18->addWidget(label_overpayment);

        lineEdit_overpayment = new QLineEdit(credit);
        lineEdit_overpayment->setObjectName(QString::fromUtf8("lineEdit_overpayment"));
        lineEdit_overpayment->setReadOnly(true);

        horizontalLayout_18->addWidget(lineEdit_overpayment);

        label_rub = new QLabel(credit);
        label_rub->setObjectName(QString::fromUtf8("label_rub"));
        label_rub->setEnabled(true);

        horizontalLayout_18->addWidget(label_rub);


        verticalLayout_33->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_total_sum = new QLabel(credit);
        label_total_sum->setObjectName(QString::fromUtf8("label_total_sum"));
        label_total_sum->setEnabled(true);
        QFont font;
        font.setBold(true);
        label_total_sum->setFont(font);

        horizontalLayout_19->addWidget(label_total_sum);

        lineEdit_total_sum = new QLineEdit(credit);
        lineEdit_total_sum->setObjectName(QString::fromUtf8("lineEdit_total_sum"));
        lineEdit_total_sum->setReadOnly(true);

        horizontalLayout_19->addWidget(lineEdit_total_sum);

        label_rub_2 = new QLabel(credit);
        label_rub_2->setObjectName(QString::fromUtf8("label_rub_2"));
        label_rub_2->setEnabled(true);

        horizontalLayout_19->addWidget(label_rub_2);


        verticalLayout_33->addLayout(horizontalLayout_19);


        retranslateUi(credit);

        QMetaObject::connectSlotsByName(credit);
    } // setupUi

    void retranslateUi(QDialog *credit)
    {
        credit->setWindowTitle(QCoreApplication::translate("credit", "Dialog", nullptr));
        annuit->setText(QCoreApplication::translate("credit", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\320\275\321\202\320\275\321\213\320\271", nullptr));
        diff->setText(QCoreApplication::translate("credit", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        label_sum->setText(QCoreApplication::translate("credit", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260 \321\200\321\203\320\261.", nullptr));
        lineEdit_sum_credit->setPlaceholderText(QCoreApplication::translate("credit", "0", nullptr));
        label_limit->setText(QCoreApplication::translate("credit", "\320\241\321\200\320\276\320\272 \320\262 \320\274\320\265\321\201\321\217\321\206\320\260\321\205", nullptr));
        lineEdit_limit->setPlaceholderText(QCoreApplication::translate("credit", "0", nullptr));
        label_percent->setText(QCoreApplication::translate("credit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260 %", nullptr));
        lineEdit_percent->setPlaceholderText(QCoreApplication::translate("credit", "0", nullptr));
        calculate->setText(QCoreApplication::translate("credit", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_pay->setText(QCoreApplication::translate("credit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266, \321\200\321\203\320\261.", nullptr));
        label_overpayment->setText(QCoreApplication::translate("credit", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203", nullptr));
        label_rub->setText(QCoreApplication::translate("credit", "\321\200\321\203\320\261.", nullptr));
        label_total_sum->setText(QCoreApplication::translate("credit", "\320\230\321\202\320\276\320\263\320\276\320\262\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260 \320\267\320\260 \320\262\320\265\321\201\321\214 \320\277\320\265\321\200\320\270\320\276\320\264", nullptr));
        label_rub_2->setText(QCoreApplication::translate("credit", "\321\200\321\203\320\261.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class credit: public Ui_credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
