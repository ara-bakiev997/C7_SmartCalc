#include "plotgraph.h"
#include "ui_plotgraph.h"

PlotGraph::PlotGraph(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlotGraph)
{
    ui->setupUi(this);
}

PlotGraph::~PlotGraph()
{
    delete ui;
}
