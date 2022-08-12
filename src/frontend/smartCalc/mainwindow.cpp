#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resoursec/image/Снимок экрана 2022-08-12 в 9.06.56 PM.png");
    int w = ui->image->width();
    int h = ui->image->height();

    ui->image->setPixmap(pix.scaled(w, h, Qt:: KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString login = ui->login->text();
    QString password = ui->password->text();
    if(login == "test" && password == "test") {
//        QMessageBox::information(this, "Ура", "Вы успешно авторизовались");
        ui->statusbar->showMessage("Вы успешно авторизовались");
    } else {
        ui->statusbar->showMessage("Вы не авторизовались");
//        QMessageBox::warning(this, "Увы(((", "Пароль или логин не верны ");
    }
}

