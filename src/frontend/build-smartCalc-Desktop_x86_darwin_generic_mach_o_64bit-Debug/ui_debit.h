/********************************************************************************
** Form generated from reading UI file 'debit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBIT_H
#define UI_DEBIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_debit
{
public:
    QVBoxLayout *verticalLayout_13;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *lineEdit_tax_sum;
    QLabel *label_13;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_sum_dep;
    QLabel *label_18;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_period;
    QLabel *label_19;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QComboBox *comboBox_peiod_of_pay;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_rate;
    QLabel *label_20;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_tax;
    QLabel *label_21;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox_capital;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLineEdit *lineEdit_total_sum_dep;
    QLabel *label_14;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_percents;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_calculate;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *lineEdit_add;
    QLabel *label_16;
    QListWidget *listWidget_add;
    QLabel *label_22;
    QLineEdit *lineEdit_add_all;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_del;
    QPushButton *pushButton_add;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *lineEdit_del;
    QLabel *label_15;
    QListWidget *listWidget_sub;
    QLabel *label_23;
    QLineEdit *lineEdit_sub_all;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_del_2;
    QPushButton *pushButton_add_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *debit)
    {
        if (debit->objectName().isEmpty())
            debit->setObjectName(QString::fromUtf8("debit"));
        debit->resize(652, 729);
        verticalLayout_13 = new QVBoxLayout(debit);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_10 = new QLabel(debit);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font;
        font.setPointSize(13);
        label_10->setFont(font);

        horizontalLayout_2->addWidget(label_10);

        lineEdit_tax_sum = new QLineEdit(debit);
        lineEdit_tax_sum->setObjectName(QString::fromUtf8("lineEdit_tax_sum"));
        lineEdit_tax_sum->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_tax_sum);

        label_13 = new QLabel(debit);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        horizontalLayout_2->addWidget(label_13);


        gridLayout_2->addLayout(horizontalLayout_2, 7, 4, 1, 3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_17 = new QLabel(debit);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        verticalLayout->addWidget(label_17);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEdit_sum_dep = new QLineEdit(debit);
        lineEdit_sum_dep->setObjectName(QString::fromUtf8("lineEdit_sum_dep"));

        horizontalLayout_4->addWidget(lineEdit_sum_dep);

        label_18 = new QLabel(debit);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        horizontalLayout_4->addWidget(label_18);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_8->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(debit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lineEdit_period = new QLineEdit(debit);
        lineEdit_period->setObjectName(QString::fromUtf8("lineEdit_period"));

        horizontalLayout_5->addWidget(lineEdit_period);

        label_19 = new QLabel(debit);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);

        horizontalLayout_5->addWidget(label_19);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_8->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(debit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_5->addWidget(label_5);

        comboBox_peiod_of_pay = new QComboBox(debit);
        comboBox_peiod_of_pay->addItem(QString());
        comboBox_peiod_of_pay->addItem(QString());
        comboBox_peiod_of_pay->setObjectName(QString::fromUtf8("comboBox_peiod_of_pay"));

        verticalLayout_5->addWidget(comboBox_peiod_of_pay);


        gridLayout->addLayout(verticalLayout_5, 0, 1, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(debit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lineEdit_rate = new QLineEdit(debit);
        lineEdit_rate->setObjectName(QString::fromUtf8("lineEdit_rate"));

        horizontalLayout_6->addWidget(lineEdit_rate);

        label_20 = new QLabel(debit);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font);

        horizontalLayout_6->addWidget(label_20);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_9->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(debit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout_4->addWidget(label_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lineEdit_tax = new QLineEdit(debit);
        lineEdit_tax->setObjectName(QString::fromUtf8("lineEdit_tax"));

        horizontalLayout_7->addWidget(lineEdit_tax);

        label_21 = new QLabel(debit);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font);

        horizontalLayout_7->addWidget(label_21);


        verticalLayout_4->addLayout(horizontalLayout_7);


        horizontalLayout_9->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(debit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout_6->addWidget(label_6);

        comboBox_capital = new QComboBox(debit);
        comboBox_capital->addItem(QString());
        comboBox_capital->addItem(QString());
        comboBox_capital->setObjectName(QString::fromUtf8("comboBox_capital"));

        verticalLayout_6->addWidget(comboBox_capital);


        gridLayout->addLayout(verticalLayout_6, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 2, 7);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_8, 8, 4, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_11 = new QLabel(debit);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        horizontalLayout_3->addWidget(label_11);

        lineEdit_total_sum_dep = new QLineEdit(debit);
        lineEdit_total_sum_dep->setObjectName(QString::fromUtf8("lineEdit_total_sum_dep"));
        lineEdit_total_sum_dep->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_total_sum_dep);

        label_14 = new QLabel(debit);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        horizontalLayout_3->addWidget(label_14);


        gridLayout_2->addLayout(horizontalLayout_3, 9, 0, 1, 7);

        verticalSpacer_6 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_6, 4, 5, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(debit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit_percents = new QLineEdit(debit);
        lineEdit_percents->setObjectName(QString::fromUtf8("lineEdit_percents"));
        lineEdit_percents->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_percents);

        label_12 = new QLabel(debit);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        horizontalLayout->addWidget(label_12);


        gridLayout_2->addLayout(horizontalLayout, 7, 0, 1, 4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_3, 8, 2, 1, 2);

        pushButton_calculate = new QPushButton(debit);
        pushButton_calculate->setObjectName(QString::fromUtf8("pushButton_calculate"));
        QFont font1;
        font1.setPointSize(20);
        pushButton_calculate->setFont(font1);
        pushButton_calculate->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 197, 84);"));

        gridLayout_2->addWidget(pushButton_calculate, 5, 0, 1, 7);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_7, 6, 5, 1, 2);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_8 = new QLabel(debit);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout_10->addWidget(label_8);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        lineEdit_add = new QLineEdit(debit);
        lineEdit_add->setObjectName(QString::fromUtf8("lineEdit_add"));

        horizontalLayout_12->addWidget(lineEdit_add);

        label_16 = new QLabel(debit);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        horizontalLayout_12->addWidget(label_16);


        verticalLayout_10->addLayout(horizontalLayout_12);


        verticalLayout_12->addLayout(verticalLayout_10);

        listWidget_add = new QListWidget(debit);
        listWidget_add->setObjectName(QString::fromUtf8("listWidget_add"));

        verticalLayout_12->addWidget(listWidget_add);

        label_22 = new QLabel(debit);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font);

        verticalLayout_12->addWidget(label_22);

        lineEdit_add_all = new QLineEdit(debit);
        lineEdit_add_all->setObjectName(QString::fromUtf8("lineEdit_add_all"));

        verticalLayout_12->addWidget(lineEdit_add_all);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        pushButton_del = new QPushButton(debit);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));

        horizontalLayout_10->addWidget(pushButton_del);

        pushButton_add = new QPushButton(debit);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));

        horizontalLayout_10->addWidget(pushButton_add);


        verticalLayout_8->addLayout(horizontalLayout_10);


        verticalLayout_12->addLayout(verticalLayout_8);


        horizontalLayout_14->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_9 = new QLabel(debit);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        verticalLayout_9->addWidget(label_9);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        lineEdit_del = new QLineEdit(debit);
        lineEdit_del->setObjectName(QString::fromUtf8("lineEdit_del"));

        horizontalLayout_13->addWidget(lineEdit_del);

        label_15 = new QLabel(debit);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        horizontalLayout_13->addWidget(label_15);


        verticalLayout_9->addLayout(horizontalLayout_13);


        verticalLayout_11->addLayout(verticalLayout_9);

        listWidget_sub = new QListWidget(debit);
        listWidget_sub->setObjectName(QString::fromUtf8("listWidget_sub"));

        verticalLayout_11->addWidget(listWidget_sub);

        label_23 = new QLabel(debit);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font);

        verticalLayout_11->addWidget(label_23);

        lineEdit_sub_all = new QLineEdit(debit);
        lineEdit_sub_all->setObjectName(QString::fromUtf8("lineEdit_sub_all"));

        verticalLayout_11->addWidget(lineEdit_sub_all);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pushButton_del_2 = new QPushButton(debit);
        pushButton_del_2->setObjectName(QString::fromUtf8("pushButton_del_2"));

        horizontalLayout_11->addWidget(pushButton_del_2);

        pushButton_add_2 = new QPushButton(debit);
        pushButton_add_2->setObjectName(QString::fromUtf8("pushButton_add_2"));

        horizontalLayout_11->addWidget(pushButton_add_2);


        verticalLayout_7->addLayout(horizontalLayout_11);


        verticalLayout_11->addLayout(verticalLayout_7);


        horizontalLayout_14->addLayout(verticalLayout_11);


        gridLayout_2->addLayout(horizontalLayout_14, 3, 0, 1, 7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_2, 6, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer, 4, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_4, 2, 0, 1, 1);


        verticalLayout_13->addLayout(gridLayout_2);


        retranslateUi(debit);

        QMetaObject::connectSlotsByName(debit);
    } // setupUi

    void retranslateUi(QDialog *debit)
    {
        debit->setWindowTitle(QCoreApplication::translate("debit", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("debit", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260\320\273\320\276\320\263\320\260:", nullptr));
        label_13->setText(QCoreApplication::translate("debit", "\321\200\321\203\320\261.", nullptr));
        label_17->setText(QCoreApplication::translate("debit", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260:", nullptr));
        label_18->setText(QCoreApplication::translate("debit", "\321\200\321\203\320\261.", nullptr));
        label_2->setText(QCoreApplication::translate("debit", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217:", nullptr));
        label_19->setText(QCoreApplication::translate("debit", "\320\274\320\265\321\201.", nullptr));
        label_5->setText(QCoreApplication::translate("debit", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214  \320\262\321\213\320\277\320\273\320\260\321\202:", nullptr));
        comboBox_peiod_of_pay->setItemText(0, QCoreApplication::translate("debit", "\320\225\320\264\320\270\320\275\320\276\320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276", nullptr));
        comboBox_peiod_of_pay->setItemText(1, QCoreApplication::translate("debit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\320\276", nullptr));

        label_3->setText(QCoreApplication::translate("debit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260:", nullptr));
        label_20->setText(QCoreApplication::translate("debit", "%", nullptr));
        label_4->setText(QCoreApplication::translate("debit", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_21->setText(QCoreApplication::translate("debit", "%", nullptr));
        label_6->setText(QCoreApplication::translate("debit", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217:", nullptr));
        comboBox_capital->setItemText(0, QCoreApplication::translate("debit", "\320\235\320\265\321\202", nullptr));
        comboBox_capital->setItemText(1, QCoreApplication::translate("debit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\320\276", nullptr));

        label_11->setText(QCoreApplication::translate("debit", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260 \320\272 \320\272\320\276\320\275\321\206\321\203 \321\201\321\200\320\276\320\272\320\260", nullptr));
        label_14->setText(QCoreApplication::translate("debit", "\321\200\321\203\320\261.", nullptr));
        label->setText(QCoreApplication::translate("debit", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213:", nullptr));
        label_12->setText(QCoreApplication::translate("debit", "\321\200\321\203\320\261.", nullptr));
        pushButton_calculate->setText(QCoreApplication::translate("debit", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_8->setText(QCoreApplication::translate("debit", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217:", nullptr));
        label_16->setText(QCoreApplication::translate("debit", "\321\200\321\203\320\261.", nullptr));
        label_22->setText(QCoreApplication::translate("debit", " \320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217:", nullptr));
        pushButton_del->setText(QCoreApplication::translate("debit", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_add->setText(QCoreApplication::translate("debit", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_9->setText(QCoreApplication::translate("debit", "\320\247\320\260\321\201\321\202\320\270\321\207\320\275\321\213\320\265 \321\201\320\275\321\217\321\202\320\270\321\217:", nullptr));
        label_15->setText(QCoreApplication::translate("debit", "\321\200\321\203\320\261.", nullptr));
        label_23->setText(QCoreApplication::translate("debit", " \320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \321\201\320\275\321\217\321\202\320\270\321\217:", nullptr));
        pushButton_del_2->setText(QCoreApplication::translate("debit", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_add_2->setText(QCoreApplication::translate("debit", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class debit: public Ui_debit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBIT_H
