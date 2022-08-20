#include "credit.h"
#include "ui_credit.h"
#include "mainwindow.h"

credit::credit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::credit)
{
    ui->setupUi(this);
}

credit::~credit()
{
    delete ui;
}

void credit::on_calculate_clicked()
{
    QString line, count;
    double rate, coeff, sum, months, pay_per_months, total = 0.0, common_pay_per_months;
    months = ui->lineEdit_limit->text().toDouble();
    sum = ui->lineEdit_sum_credit->text().toDouble();
    ui->listWidget_pay->clear();
    if (ui->annuit->isChecked()) {
        rate = ui->lineEdit_percent->text().toDouble() / 12 / 100;
        coeff = rate * pow((1 + rate), months) / (pow((1 + rate), months) - 1);
        pay_per_months = coeff * sum;
        total = pay_per_months * months;
        total = round(total);
        pay_per_months = round(pay_per_months);
        line = QString::number(total, 'g', 20);
        ui->lineEdit_total_sum->setText(line);
        line = QString::number(total - sum, 'g', 20);
        ui->lineEdit_overpayment->setText(line);
        line = QString::number(pay_per_months, 'g', 20);
        for(int i = 1; i <= (int)months; i++) {
           count =QString::number(i, 'g', 20);
           ui->listWidget_pay->addItem(count  + " month: " + line);
        }
    } else if (ui->diff->isChecked()) {
        pay_per_months = sum / months;
        double tmp = sum;
        rate = ui->lineEdit_percent->text().toDouble();
        for(int i = 1; i <= (int)months; i++) {
            common_pay_per_months = pay_per_months + (tmp * rate / 100 * AVERAGE_DAYS_IN_MONTH / 365);
            count =QString::number(i, 'g', 20);
            common_pay_per_months = round(common_pay_per_months);
            line = QString::number(common_pay_per_months, 'g', 20);
            ui->listWidget_pay->addItem(count  + " month: " + line);
            tmp -= pay_per_months;
            total += common_pay_per_months;
        }
        total = round(total);
        line = QString::number(total, 'g', 20);
        ui->lineEdit_total_sum->setText(line);
        line = QString::number(total - sum, 'g', 20);
        ui->lineEdit_overpayment->setText(line);
    }

}
