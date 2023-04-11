/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#include "adminproducts.h"
#include "ui_adminproducts.h"
#include "additems.h"
#include <QFile>
#include <QTextStream>
#include <QTableWidget>
#include<QString>
#include<QMessageBox>
#include<QDate>
#include<QRandomGenerator>
#include<QDebug>
AdminProducts::AdminProducts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminProducts)
{
    ui->setupUi(this);


}

AdminProducts::~AdminProducts()
{
    delete ui;
}

void AdminProducts::showAdminProducts()
{
    ui->label->setText("Products Info");
    ui->pushButton_addIterm->show();
    ui->checkout->hide();
    ui->getSales->hide();
    ui->info->hide();

    QFile productsFile ("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/Items.txt");
    productsFile.open(QIODevice::ReadOnly|QIODevice::Text);
    QByteArray data=productsFile.readAll();
    QStringList productsData=QString(data).split('\n');

    //add rows and columns
    ui->tableWidget_Products->setRowCount(productsData.size());
    ui->tableWidget_Products->setColumnCount(7);

    QStringList headers=QStringList()<<"PRODUCT'S ID"<<"NAME"<<"TYPE"<<"WEIGHT/VOLUME"<<"UNIT PRICE"<<"DESCRIPTION"<<"STOCK"; //table's headers
        ui->tableWidget_Products->setHorizontalHeaderLabels(headers);

        QStringList productData;
        for(int i=0;i<productsData.size();i++){
            productData=productsData.at(i).split('#'); //split any time found '#'
            for(int j=0;j<productData.size();j++)
                ui->tableWidget_Products->setItem(i,j,new QTableWidgetItem(productData.at(j)));
        }
}

void AdminProducts::showCustomerInfo()
{
    ui->label->setText("Customer Info");
    ui->pushButton_addIterm->hide();
    ui->checkout->hide();
    ui->getSales->hide();ui->info->hide();

    QFile customersFile ("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/customerFile.txt");
    customersFile.open(QIODevice::ReadOnly|QIODevice::Text);
    QByteArray data=customersFile.readAll();
    QStringList customersData=QString(data).split('\n');
    customersData.removeAll("");

    //add rows and columns
    ui->tableWidget_Products->setRowCount(customersData.size());
    ui->tableWidget_Products->setColumnCount(8);

    QStringList headers=QStringList()<<"USERNAME"<<"PASSWORD"<<"FIRSTNAME"<<"LASTNAME"<<"EMAIL"<<"MOB NO."<<"DOB"<<"ADDRESS";
        ui->tableWidget_Products->setHorizontalHeaderLabels(headers);
        QStringList customerData;
        for(int i=0;i<customersData.size();i++){
            customerData=customersData.at(i).split('#'); //split any time found '#'
            for(int j=0;j<customerData.size();j++)
                ui->tableWidget_Products->setItem(i,j,new QTableWidgetItem(customerData.at(j)));
        }
}
#include<QDebug>
void AdminProducts::showCartInfo(QStringList cartData)
{
    ui->label->setText("Cart Info");
    ui->pushButton_addIterm->hide();
    ui->checkout->show();
    ui->info->show();
    ui->getSales->hide();

    this->cartData=cartData;

    QStringList productsData=cartData;
    productsData.removeAll("");

    //add rows and columns
    ui->tableWidget_Products->setRowCount(productsData.size());
    ui->tableWidget_Products->setColumnCount(8);

    QStringList headers=QStringList()<<"ID"<<"NAME"<<"TYPE"<<"WEIGHT/VOLUME"<<"UNIT PRICE"<<"DESCRIPTION"<<"QTY"<<"TOTAL";
        ui->tableWidget_Products->setHorizontalHeaderLabels(headers);
        QStringList productData;
        float totalbeftax=0;
        for(int i=0;i<productsData.size();i++){
            productData=productsData.at(i).split('#');
            totalbeftax+=productData.at(7).toUtf8().replace("$","").toFloat(); //remove '$' sign and change to float
            for(int j=0;j<productData.size();j++)
                ui->tableWidget_Products->setItem(i,j,new QTableWidgetItem(productData.at(j)));

        }
        qDebug()<<totalbeftax<<cartData;
        float tax=totalbeftax*0.06; //6% of tax
        float totaltopay=totalbeftax+tax;
        //add (1,'f',2) to rounf float to 2 decimales
        ui->info->setText(QString("Total Before Tax : $%1\nTotal Tax : $%2\nTotal To Pay : $%3  ").arg(totalbeftax).arg(tax,1,'f',2).arg(totaltopay,1,'f',2));

}

void AdminProducts::showOrdersInfo()
{
    ui->label->setText("Orders Info");
    ui->pushButton_addIterm->hide();
    ui->checkout->hide();
    ui->getSales->hide();
    ui->info->show();

    QFile productsFile ("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/"+username+".txt");
    productsFile.open(QIODevice::ReadOnly|QIODevice::Text);
    QByteArray data=productsFile.readAll();
    QStringList productsData=QString(data).split('\n');productsData.removeAll("");

    //add rows and columns
    ui->tableWidget_Products->setRowCount(productsData.size());
    ui->tableWidget_Products->setColumnCount(9);

    QStringList headers=QStringList()<<"Order ID"<<"ID"<<"NAME"<<"TYPE"<<"WEIGHT/VOLUME"<<"UNIT PRICE"<<"DESCRIPTION"<<"QTY"<<"TOTAL";
        ui->tableWidget_Products->setHorizontalHeaderLabels(headers);

        QStringList productData;
         float totalbeftax=0;
        for(int i=0;i<productsData.size();i++){
            productData=productsData.at(i).split('#');
             totalbeftax+=productData.at(8).toUtf8().replace("$","").toFloat(); //remove $ and change to float
            for(int j=0;j<productData.size();j++)
                ui->tableWidget_Products->setItem(i,j,new QTableWidgetItem(productData.at(j)));
        }
        qDebug()<<"Show Orders Info"<<totalbeftax<<cartData;
        float tax=totalbeftax*0.06;
        float totaltopay=totalbeftax+tax;


        ui->info->setText(QString("Total Before Tax : $%1\nTotal Tax : $%2\nTotal Paid : $%3  ").arg(totalbeftax).arg(tax,1,'f',2).arg(totaltopay,1,'f',2));

}

void AdminProducts::chooseCustomer()
{
    ui->label->setText("Choose Customer");
    ui->pushButton_addIterm->hide();
    ui->checkout->hide();
    ui->getSales->show();ui->info->hide();

    QFile customersFile ("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/customerFile.txt");
    customersFile.open(QIODevice::ReadOnly|QIODevice::Text);
    QByteArray data=customersFile.readAll();
    QStringList customersData=QString(data).split('\n');
    customersData.removeAll("");

    //add rows and columns
    ui->tableWidget_Products->setRowCount(customersData.size());
    ui->tableWidget_Products->setColumnCount(1);

    QStringList headers=QStringList()<<"USERNAME"<<"PASSWORD"<<"FIRSTNAME"<<"LASTNAME"<<"EMAIL"<<"MOB NO."<<"DOB"<<"ADDRESS";
        ui->tableWidget_Products->setHorizontalHeaderLabels(headers);

        QStringList customerData;
        for(int i=0;i<customersData.size();i++){
            customerData=customersData.at(i).split('#');
            for(int j=0;j<1;j++)
                ui->tableWidget_Products->setItem(i,j,new QTableWidgetItem(customerData.at(j)));
        }

}

void AdminProducts::showSales()
{
ui->label->setText("Sales Info");
    ui->pushButton_addIterm->hide();
    ui->checkout->hide();
    ui->getSales->hide();
    ui->info->show();

    QFile productsFile ("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/"+username+".txt"); //open specific customer's file
    if(!productsFile.open(QIODevice::ReadOnly|QIODevice::Text))
        return;
    QByteArray data=productsFile.readAll();
    QStringList productsData=QString(data).split('\n'); // split line when return line
    productsData.removeAll("");

    //add rows and columns
    ui->tableWidget_Products->setRowCount(productsData.size()+1);
    ui->tableWidget_Products->setColumnCount(9);


    QStringList headers=QStringList()<<"ORDER ID" << "PRODUCT ID" <<"NAME"<<"TYPE"<<"WEIGHT/VOLUME"<<"UNIT PRICE"<<"DESCRIPTION"<<"QTY"<<"TOTAL";
        ui->tableWidget_Products->setHorizontalHeaderLabels(headers);

        float grandTotal=0;
        QStringList productData;
        for(int i=0;i<productsData.size();i++){
            productData=productsData.at(i).split('#'); // split strings when find # in the way
            grandTotal+=productData.at(8).toUtf8().replace("$","").toFloat(); //remove $ and change to float
            for(int j=0;j<productData.size();j++)
                ui->tableWidget_Products->setItem(i,j,new QTableWidgetItem(productData.at(j)));
        }
        ui->tableWidget_Products->setItem(productData.size()+1,8,new QTableWidgetItem(QString::number(grandTotal)));
        float totalbeftax=grandTotal;
        float tax=totalbeftax*0.06;
        float totaltopay=totalbeftax+tax;


        ui->info->setText(QString("Total Before Tax : $%1\nTotal Tax : $%2\nTotal Paid : $%3  ").arg(totalbeftax).arg(tax,1,'f',2).arg(totaltopay,1,'f',2));
}

#include<QDebug>
void AdminProducts::showOutOfStock()
{
    ui->label->setText("<b>The Following Products are Out Of Stock<b>");
    ui->pushButton_addIterm->hide();
    ui->checkout->hide();
    ui->getSales->hide();
    QFile productsFile ("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/Items.txt");
    productsFile.open(QIODevice::ReadOnly|QIODevice::Text);
    QByteArray data=productsFile.readAll();
    QStringList productsData=QString(data).split('\n');
    productsData.removeAll("");

    //add rows and columns
    ui->tableWidget_Products->setRowCount(productsData.size());
    ui->tableWidget_Products->setColumnCount(1); //need just 1 columns

    QStringList headers=QStringList()<<"NAME"; //show only name
        ui->tableWidget_Products->setHorizontalHeaderLabels(headers);
        QStringList productData;
        for(int i=0;i<productsData.size();i++){
            productData=productsData.at(i).split('#');
            if(productData.size()<=1)
                break;
            if(productData.at(6).toInt()<=0){
            for(int j=0;j<productData.size();j++)
                ui->tableWidget_Products->setItem(i,0,new QTableWidgetItem(productData.at(1)));
            }
        }
        ui->tableWidget_Products->sortItems(0);
}
void AdminProducts::orderInfoById(QStringList productsData)
{

    ui->label->setText("Orders Info");
    ui->pushButton_addIterm->hide();
    ui->checkout->hide();
    ui->getSales->hide();
    ui->info->show();

    productsData.removeAll("");

    //add rows and columns
    ui->tableWidget_Products->setRowCount(productsData.size());
    ui->tableWidget_Products->setColumnCount(9);

    QStringList headers=QStringList()<<"Order ID"<<"ID"<<"NAME"<<"TYPE"<<"WEIGHT/VOLUME"<<"UNIT PRICE"<<"DESCRIPTION"<<"QTY"<<"TOTAL";
        ui->tableWidget_Products->setHorizontalHeaderLabels(headers);

        QStringList productData;
         float totalbeftax=0;
        for(int i=0;i<productsData.size();i++){
            productData=productsData.at(i).split('#');
             totalbeftax+=productData.at(8).toUtf8().replace("$","").toFloat();
            for(int j=0;j<productData.size();j++)
                ui->tableWidget_Products->setItem(i,j,new QTableWidgetItem(productData.at(j)));
        }
        qDebug()<<"Show Orders Info"<<totalbeftax<<cartData;
        float tax=totalbeftax*0.06;
        float totaltopay=totalbeftax+tax;
        ui->info->setText(QString("Total Before Tax : $%1\nTotal Tax : $%2\nTotal Paid : $%3  ").arg(totalbeftax).arg(tax,1,'f',2).arg(totaltopay,1,'f',2));
}

void AdminProducts::on_pushButton_addIterm_clicked()
{
    additem = new addItems(this);
    additem -> show();

}

void AdminProducts::on_checkout_clicked()
{
QFile checkoutData("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/"+username+".txt"); //open specific customer's file
checkoutData.open(QIODevice::WriteOnly | QIODevice::Append);
quint32 orderID=QRandomGenerator::global()->generate();
checkoutData.write(QString::number(orderID).toUtf8()+"#"+cartData.join("\n"+QString::number(orderID)+"#").toUtf8()+"\n");
checkoutData.flush();
checkoutData.close();
QMessageBox::information(this, "Checkout", "Checkout Done Successfully");
}

void AdminProducts::on_getSales_clicked()
{
    username=ui->tableWidget_Products->currentItem()->text();
    qDebug()<<username<<"Selected";
    showSales();
}
