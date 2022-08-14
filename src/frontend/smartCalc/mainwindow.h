#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"
#include <qvector.h>

extern "C" {
   #include "../../s21_smartcalc.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    double xBegin, xEnd, h, X;
    int N;

    QVector<double> x,y;


private slots:
        void digits_and_operators();
        void functions();
        void calculate();
        void AC();
        void del();

        void on_pushButton_clicked();
};
#endif // MAINWINDOW_H
