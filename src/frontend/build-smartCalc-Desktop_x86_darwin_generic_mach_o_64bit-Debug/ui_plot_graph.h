/********************************************************************************
** Form generated from reading UI file 'plot_graph.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOT_GRAPH_H
#define UI_PLOT_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_plot_graph
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *widget;

    void setupUi(QDialog *plot_graph)
    {
        if (plot_graph->objectName().isEmpty())
            plot_graph->setObjectName(QString::fromUtf8("plot_graph"));
        plot_graph->resize(400, 300);
        gridLayout = new QGridLayout(plot_graph);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QCustomPlot(plot_graph);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(plot_graph);

        QMetaObject::connectSlotsByName(plot_graph);
    } // setupUi

    void retranslateUi(QDialog *plot_graph)
    {
        plot_graph->setWindowTitle(QCoreApplication::translate("plot_graph", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class plot_graph: public Ui_plot_graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOT_GRAPH_H
