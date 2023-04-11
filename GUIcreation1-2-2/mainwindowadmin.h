/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#ifndef MAINWINDOWADMIN_H
#define MAINWINDOWADMIN_H
#include "adminproducts.h"
#include <QMainWindow>
#include "mainwindowcustomer.h"
#include "createnewaccount.h"
#include "employee.h"
#include "forgotpassword.h"




namespace Ui {
class MainWindowAdmin;
}

class MainWindowAdmin : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowAdmin(QWidget *parent = nullptr);
    ~MainWindowAdmin();

private slots:
    void on_signOffButton_clicked();

    void on_productsButton_clicked();

    void on_customersButton_clicked();

    void on_alertButton_clicked();

    void on_salesButton_clicked();



    void on_statisticsButton_clicked();

    void on_orderByID_clicked();



    void on_employeesButton_clicked();

private:
    Ui::MainWindowAdmin *ui;
    AdminProducts *adminprod;
    employee *emp;



};

#endif // MAINWINDOWADMIN_H
