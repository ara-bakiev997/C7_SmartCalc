#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <QDialog>

namespace Ui {
class deposit;
}

class deposit : public QDialog
{
    Q_OBJECT

public:
    explicit deposit(QWidget *parent = nullptr);
    ~deposit();

private slots:
    void on_pushButton_calculate_clicked();

    double on_pushButton_del_clicked();

    void on_pushButton_add_clicked();

    double on_pushButton_del_2_clicked();

    void on_pushButton_add_2_clicked();

private:
    Ui::deposit *ui;
};

#endif // DEPOSIT_H
