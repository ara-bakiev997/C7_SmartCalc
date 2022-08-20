#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "credit.h"
#include "debit.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*Numbers*/
    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_x, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    /*Another operations*/
    connect(ui->pushButton_dot, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_openBracket, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_closeBracket, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    /*Arithmetic operations*/
    connect(ui->pushButton_sum, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_sub, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    connect(ui->pushButton_pow, SIGNAL(clicked()), this, SLOT(digits_and_operators()));
    /*Trigonometric operations*/
    connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(functions()));
    /*Support operations*/
    connect(ui->pushButton_equal, SIGNAL(clicked()), this, SLOT(calculate()));
    connect(ui->pushButton_AC, SIGNAL(clicked()), this, SLOT(AC()));
    connect(ui->pushButton_delete, SIGNAL(clicked()), this, SLOT(del()));
    /*PlotGraph*/



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_and_operators() {
    QPushButton *button = (QPushButton *)sender();
    QString new_label = ui->string->text() + button->text();
    ui->string->setText(new_label);
}

void MainWindow::functions() {
    QPushButton *button = (QPushButton *)sender();
    QString new_label = ui->string->text() + button->text() + "(";
    ui->string->setText(new_label);
}

void MainWindow::calculate() {
    QString value;
    value = ui->string->text();
    double result;
    QByteArray str_bit = value.toLocal8Bit();
    char *res_str = str_bit.data();
    int check = start(res_str, &result);
    if (!check) {
      ui->result->setText("ERROR");
      ui->string->setText("");
    } else {
      value = QString::number(result, 'g', 20);
      ui->result->setText(value);
      ui->string->setText("");
    }

}

void MainWindow::AC() {
    ui->string->setText("");
    ui->result->setText("");
    ui->widget->clearGraphs();
    x.clear();
    y.clear();
    ui->widget->replot();

}

void MainWindow::del() {
    QString new_label =  ui->string->text();
    new_label.chop(1);
    ui->string->setText(new_label);
}

    /*PlotGraph*/
double MainWindow::doubleSpinBox_Xmax() {
    return ui->doubleSpinBox_Xmax->text().toDouble();
}

double MainWindow::doubleSpinBox_Xmin() {
    return ui->doubleSpinBox_Xmin->text().toDouble();
}

void MainWindow::on_pushButton_clicked()
{
    ui->widget->clearGraphs();
    QString new_label = ui->string->text();
           QString value, origin_string;
           h = 0.1;
           xBegin = doubleSpinBox_Xmin();
           xEnd = doubleSpinBox_Xmax();
           ui->widget->xAxis->setRange(xBegin, xEnd);
           ui->widget->yAxis->setRange(xBegin, xEnd);
           Y = 0;
           for(X = xBegin; X <= xEnd; X+= h) {
               if (fabs(X) < EPS) X = 0;
               x.push_back(X);
               origin_string = new_label;
               value = origin_string.replace("x",('(' + QString::number(X) + ')'));
               QByteArray str_bit = value.toLocal8Bit();
               char *res_str = str_bit.data();
               int check = start(res_str, &Y);
               if (!check) {
                 ui->result->setText("ERROR");
                 ui->string->setText("");
               } else {
                 y.push_back(Y);
               }
           }
           ui->widget->addGraph();
           ui->widget->graph(0)->addData(x,y);
           ui->widget->replot();
           x.clear();
           y.clear();
}





void MainWindow::on_pushButton_Credit_clicked()
{
    credit window;
    window.setModal(true);
    window.exec();
}


void MainWindow::on_pushButton_Deposit_clicked()
{
    debit window;
    window.setModal(true);
    window.exec();
}

