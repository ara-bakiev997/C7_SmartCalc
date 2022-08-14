#ifndef PLOT_GRAPH_H
#define PLOT_GRAPH_H

#include <QDialog>

namespace Ui {
class plot_graph;
}

class plot_graph : public QDialog
{
    Q_OBJECT

public:
    explicit plot_graph(QWidget *parent = nullptr);
    ~plot_graph();

private:
    Ui::plot_graph *ui;
};

#endif // PLOT_GRAPH_H
