/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#ifndef MAINWINDOWCUSTOMER_H
#define MAINWINDOWCUSTOMER_H

#include <QMainWindow>
#include "adminproducts.h"
#include"shoppingitems.h"
namespace Ui {
class mainwindowcustomer;
}

class mainwindowcustomer : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainwindowcustomer(QWidget *parent = nullptr);
    ~mainwindowcustomer();
    AdminProducts *adminprod;
    shoppingItems *shoppingitems;
private slots:
    void on_signOffButton_clicked();

    void on_startShoppingButton_clicked();

    void on_accountButton_clicked();

    void on_cartButton_clicked();

    void on_ordersButton_clicked();

private:
    Ui::mainwindowcustomer *ui;
};

#endif // MAINWINDOWCUSTOMER_H
