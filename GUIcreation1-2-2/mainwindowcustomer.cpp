/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#include "mainwindowcustomer.h"
#include "ui_mainwindowcustomer.h"
#include <QPixmap>
#include "quitdialog.h"
#include<QFile>
#include <QMessageBox>
mainwindowcustomer::mainwindowcustomer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainwindowcustomer)
{
    ui->setupUi(this);
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    adminprod = new AdminProducts(this);
    shoppingitems=new shoppingItems(this);
    //logo
    QPixmap pix (":/new/prefix1/logoImg/finalLogo.png");
    ui -> label_11 -> setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));

    //Button Icon
    ui-> startShoppingButton -> setIcon(QIcon(":/new/prefix1/logoImg/shopping.png"));
    ui->startShoppingButton->setIconSize(QSize(80, 80));

    ui-> cartButton -> setIcon(QIcon(":/new/prefix1/logoImg/cart.png"));
    ui-> cartButton->setIconSize(QSize(80, 80));

    ui-> ordersButton -> setIcon(QIcon(":/new/prefix1/logoImg/orders.png"));
    ui-> ordersButton ->setIconSize(QSize(80, 80));
}

mainwindowcustomer::~mainwindowcustomer()
{
    delete ui;
}


void mainwindowcustomer::on_signOffButton_clicked()
{

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Quit", "are you sure you want to Sign off ?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        close();
        qApp->exit(4444);
    }
}

void mainwindowcustomer::on_startShoppingButton_clicked()
{
shoppingitems->show();
}

void mainwindowcustomer::on_accountButton_clicked()
{
    adminprod->showCustomerInfo();
    adminprod -> show();
}

void mainwindowcustomer::on_cartButton_clicked()
{
    adminprod->showCartInfo(shoppingitems->cartData);
    adminprod -> show();
}

void mainwindowcustomer::on_ordersButton_clicked()
{
    adminprod->showOrdersInfo();
    adminprod -> show();
}
