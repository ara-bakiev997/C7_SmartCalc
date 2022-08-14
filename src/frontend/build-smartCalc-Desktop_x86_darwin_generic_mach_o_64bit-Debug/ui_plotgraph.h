/********************************************************************************
** Form generated from reading UI file 'plotgraph.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTGRAPH_H
#define UI_PLOTGRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_PlotGraph
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *widget;

    void setupUi(QDialog *PlotGraph)
    {
        if (PlotGraph->objectName().isEmpty())
            PlotGraph->setObjectName(QString::fromUtf8("PlotGraph"));
        PlotGraph->resize(400, 300);
        gridLayout = new QGridLayout(PlotGraph);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QCustomPlot(PlotGraph);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(PlotGraph);

        QMetaObject::connectSlotsByName(PlotGraph);
    } // setupUi

    void retranslateUi(QDialog *PlotGraph)
    {
        PlotGraph->setWindowTitle(QCoreApplication::translate("PlotGraph", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlotGraph: public Ui_PlotGraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTGRAPH_H
