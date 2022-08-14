#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_dot, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_sum, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_sub, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_openBracket, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_closeBracket, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_equal, SIGNAL(clicked()), this, SLOT(calculate()));
    connect(ui->pushButton_equal, SIGNAL(clicked()), this, SLOT(AC()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers() {
    QPushButton *button = (QPushButton *)sender();
    QString new_label;
    new_label = ui->string->text() + button->text();

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
        } else {
            value = QString::number(result);
            ui->result->setText(value);
            ui->string->setText("");
        }
    }
}

void MainWindow::AC() {
    ui->string->setText("");
}


