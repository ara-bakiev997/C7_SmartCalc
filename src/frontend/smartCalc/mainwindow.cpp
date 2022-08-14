#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "plotgraph.h"


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
    QPushButton *button = (QPushButton *)sender();
    QString value;
    value = ui->string->text();
    if (button->text() == '=') {
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
}

void MainWindow::AC() {
    ui->string->setText("");
    ui->result->setText("");
    ui->widget->addGraph(0);
}

void MainWindow::del() {
//    QPushButton *button = (QPushButton *)sender();
    QString new_label =  ui->string->text();
    new_label = new_label.remove(0, new_label.length());
    ui->string->setText(new_label);
}


void MainWindow::on_pushButton_clicked()
{
    h = 0.1;
    xBegin = -3;
    xEnd = 3 + h;
    ui->widget->xAxis->setRange(-4, 4);
    ui->widget->yAxis->setRange(0, 9);

    N = (xEnd - xBegin)/h + 2;

    for(X = xBegin; X <= xEnd; X+= h) {
        x.push_back(X);
        y.push_back(X*X);
    }
    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();
//    PlotGraph windowGraph;
//    windowGraph.setModal(true);
//    windowGraph.exec();
}

