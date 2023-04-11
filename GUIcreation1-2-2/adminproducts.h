/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#ifndef ADMINPRODUCTS_H
#define ADMINPRODUCTS_H
#include "additems.h"

#include <QDialog>

namespace Ui {
class AdminProducts;
}

class AdminProducts : public QDialog
{
    Q_OBJECT

public:
    explicit AdminProducts(QWidget *parent = nullptr);
    ~AdminProducts();
     void showAdminProducts();
     void showCustomerInfo();
     void showCartInfo(QStringList cartData);
     void showOrdersInfo();
     void chooseCustomer();
     void showSales();
     void showOutOfStock();
     void orderInfoById(QStringList productsData);
     QString username;

private slots:
    void on_pushButton_addIterm_clicked();


    void on_checkout_clicked();

    void on_getSales_clicked();

private:
    Ui::AdminProducts *ui;
    addItems *additem;
    QStringList cartData;
};

#endif // ADMINPRODUCTS_H
