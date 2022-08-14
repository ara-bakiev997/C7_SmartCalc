#include "plot_graph.h"
#include "ui_plot_graph.h"

plot_graph::plot_graph(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::plot_graph)
{
    ui->setupUi(this);
}

plot_graph::~plot_graph()
{
    delete ui;
}
