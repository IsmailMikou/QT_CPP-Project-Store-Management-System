/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QDialog>
#include "addnewemployee.h"

namespace Ui {
class employee;
}

class employee : public QDialog
{
    Q_OBJECT

public:
    explicit employee(QWidget *parent = nullptr);
    ~employee();

private slots:
    void on_pushButton_addEmployee_clicked();

private:
    Ui::employee *ui;
    addnewemployee *newEmp;
};

#endif // EMPLOYEE_H
