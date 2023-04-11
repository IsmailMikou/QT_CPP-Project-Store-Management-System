/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#include "mainwindowadmin.h"
#include "ui_mainwindowadmin.h"
#include "adminproducts.h"
#include "quitdialog.h"
#include <QPixmap>
#include "login.h"
#include<QFile>
#include<QDebug>
#include<QList>
#include<QMessageBox>
#include<QInputDialog>
MainWindowAdmin::MainWindowAdmin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowAdmin)
{
    ui->setupUi(this);
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    // logo
    QPixmap pix (":/new/prefix1/logoImg/finalLogo.png");
    ui -> label_11 -> setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));


    //Button Icon
    ui->productsButton -> setIcon(QIcon(":/new/prefix1/logoImg/products.png"));
    ui->productsButton->setIconSize(QSize(80, 80));

    ui-> salesButton-> setIcon(QIcon(":/new/prefix1/logoImg/sales.png"));
    ui-> salesButton->setIconSize(QSize(80, 80));

    ui->customersButton -> setIcon(QIcon(":/new/prefix1/logoImg/customer.png"));
    ui-> customersButton->setIconSize(QSize(80, 80));

    ui-> statisticsButton -> setIcon(QIcon(":/new/prefix1/logoImg/statistics.png"));
    ui-> statisticsButton ->setIconSize(QSize(80, 80));

    ui-> employeesButton -> setIcon(QIcon(":/new/prefix1/logoImg/employee.png"));
    ui->employeesButton ->setIconSize(QSize(80, 80));

    ui-> alertButton -> setIcon(QIcon(":/new/prefix1/logoImg/alert.png"));
    ui-> alertButton ->setIconSize(QSize(80, 80));
}

MainWindowAdmin::~MainWindowAdmin()
{
    delete ui;
}

void MainWindowAdmin::on_signOffButton_clicked()
{
//Quit dialog
QMessageBox::StandardButton reply = QMessageBox::question(this, "Quit", "are you sure you want to Sign off ?", QMessageBox::Yes | QMessageBox::No);
//if clicked yes log out
if (reply == QMessageBox::Yes) {
    close();
    qApp->exit(4444);
}
//if clicked no just stay


}

//open products
void MainWindowAdmin::on_productsButton_clicked()
{

    adminprod = new AdminProducts(this);
    adminprod->showAdminProducts();
    adminprod->setWindowTitle("Products");
    adminprod -> show();
}

//open customers
void MainWindowAdmin::on_customersButton_clicked()
{
    adminprod = new AdminProducts(this);
    adminprod->showCustomerInfo();
    adminprod->setWindowTitle("Customer Info");
    adminprod -> show();
}

//open alerts
void MainWindowAdmin::on_alertButton_clicked()
{
    adminprod = new AdminProducts(this);
    adminprod->showOutOfStock();
    adminprod->setWindowTitle("Out Of Stock Products");
    adminprod -> show();
}

//open sales
void MainWindowAdmin::on_salesButton_clicked()
{
    adminprod = new AdminProducts(this);
    adminprod->chooseCustomer();
    adminprod->setWindowTitle("Sales Info");
    adminprod -> show();
}

//open statistics
void MainWindowAdmin::on_statisticsButton_clicked()
{
    QFile customersFile("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/customerFile.txt");
    customersFile.open(QIODevice::ReadOnly|QIODevice::Text);
    QByteArray data=customersFile.readAll();
    QStringList customersData=QString(data).split('\n');
    customersData.removeAll("");
    QStringList usernames;
    foreach(QString customer,customersData){
        usernames+=customer.split("#").first();
    }
    qDebug()<<"Customers"<<usernames;

    QMap<QString,float> itemSale;
    QMap<QString,float> customerSale;
    float totalSales=0;
    foreach(QString username,usernames){
        QFile userdata("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/"+username+".txt"); //open specific customer's file
        userdata.open(QIODevice::ReadOnly);
        QStringList data=QString(userdata.readAll()).split('\n');
        data.removeAll("");
        float custsale=0;
        foreach(QString line,data){
            QStringList temp=line.split("#");
            QString item=temp.at(2);
            float total=temp.last().toFloat();
            itemSale[item]+=total;
            totalSales+=total;
            custsale= (custsale+ total);

        }
        customerSale[username]=custsale + (custsale*0.06); //to include taxes
    }
    float totalTaxes=(totalSales*0.06);
    float grandtotal = totalSales+totalTaxes; //?
    qDebug()<<"Per Item Sale"<<itemSale;
    qDebug()<<"Total Sales"<<totalSales;
    qDebug()<<"Total Taxes"<<totalTaxes;
    qDebug()<<"Grand Total" << grandtotal;
    qDebug()<<"Per Customer Sale"<<customerSale;
    QString peritem;
    foreach(QString key,itemSale.keys()){
        peritem+=key+" : "+QString::number(itemSale[key])+"\n";
    }

    QString percust;
    foreach(QString key,customerSale.keys()){
        percust+=key+" : "+QString::number(customerSale[key],'f',2)+"\n";
    }

    QString info=QString("Per Item Sale (Tax Excluded):               \n%1\nTotal Sales (Tax Excluded) : %2\nTotal Taxes : %3\nGrand Total : %4\n\nPer Customer Sale :               \n%5\n");

    QMessageBox::information(this,"Monthly Statistics",info.arg(peritem).arg(totalSales,1,'f',2).arg(totalTaxes,1,'f',2).arg(grandtotal,1,'f',2).arg(percust));
}

void MainWindowAdmin::on_orderByID_clicked()
{

    QFile customersFile("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/customerFile.txt");
    customersFile.open(QIODevice::ReadOnly|QIODevice::Text);
    QByteArray data=customersFile.readAll();
    QStringList customersData=QString(data).split('\n');
    customersData.removeAll("");
    QStringList usernames;
    foreach(QString customer,customersData){
        usernames+=customer.split("#").first();
    }
    qDebug()<<"Customers"<<usernames;

    QString orderid=QInputDialog::getText(this,"Enter Order ID","Enter Order ID");


    QMap<QString,QStringList> itemOrder;

    foreach(QString username,usernames){
        QFile userdata("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/"+username+".txt");
        userdata.open(QIODevice::ReadOnly);
        QStringList data=QString(userdata.readAll()).split('\n');
        data.removeAll("");

        foreach(QString line,data){
            QStringList temp=line.split("#");
            QString orderid=temp.at(0);
            itemOrder[orderid].append(temp.join("#")+'\n');
        }
    }

    qDebug()<<itemOrder;

    adminprod = new AdminProducts(this);
    adminprod->orderInfoById(itemOrder[orderid]);
    adminprod->setWindowTitle("Sales Info");
    adminprod -> show();
}



void MainWindowAdmin::on_employeesButton_clicked()
{
    emp = new employee(this);
    emp -> show();
}
