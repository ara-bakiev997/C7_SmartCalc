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
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_debit
{
public:

    void setupUi(QDialog *debit)
    {
        if (debit->objectName().isEmpty())
            debit->setObjectName(QString::fromUtf8("debit"));
        debit->resize(400, 300);

        retranslateUi(debit);

        QMetaObject::connectSlotsByName(debit);
    } // setupUi

    void retranslateUi(QDialog *debit)
    {
        debit->setWindowTitle(QCoreApplication::translate("debit", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class debit: public Ui_debit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBIT_H
