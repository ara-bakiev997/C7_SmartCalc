#ifndef PLOTGRAPH_H
#define PLOTGRAPH_H

#include <QDialog>

namespace Ui {
class PlotGraph;
}

class PlotGraph : public QDialog
{
    Q_OBJECT

public:
    explicit PlotGraph(QWidget *parent = nullptr);
    ~PlotGraph();

private:
    Ui::PlotGraph *ui;
};

#endif // PLOTGRAPH_H
