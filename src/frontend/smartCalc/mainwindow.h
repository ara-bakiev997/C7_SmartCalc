#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"
#include <qvector.h>
#include <string.h>

#define AVERAGE_DAYS_IN_MONTH 30.416666666666667851
#define NDFL 13/100

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
    double xBegin, xEnd, h, X, Y;
    int N;

    QVector<double> x,y;


private slots:
        void digits_and_operators();
        void functions();
        void calculate();
        void AC();
        void del();
        void on_pushButton_clicked();
        double doubleSpinBox_Xmax();
        double doubleSpinBox_Xmin();
        void on_pushButton_Credit_clicked();
        void on_pushButton_Deposit_clicked();
};
#endif // MAINWINDOW_H
