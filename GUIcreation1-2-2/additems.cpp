/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#include "additems.h"
#include "ui_additems.h"
#include <QComboBox>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QString>
#include <QStringList>


addItems::addItems(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addItems)
{
    ui->setupUi(this);
        QStringList productsTypes=(QStringList() << "Fruits and Vegetable" << "Meat" << "Dairy Products" );
        QStringList productsWV = (QStringList() << "LB" << "GAL" );

// add list to combobx
        ui -> comboBox_typeProduct -> addItems(productsTypes);
        ui -> comboBox_WV -> addItems(productsWV);
}

addItems::~addItems()
{
    delete ui;
}

void addItems::on_pushButton_saveProduct_clicked()
{
    QFile itemFile ("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/Items.txt");

    if(!itemFile.open(QIODevice::ReadWrite | QIODevice::Append)) {
        QMessageBox::warning(this,"title","file not opened");
    }
    //if file found write items to it
    else {
    QTextStream out(&itemFile);

    QString idprod = ui -> lineEdit_productID -> text();
    out << idprod << "#";

    QString nameprod = ui -> lineEdit_nameProduct -> text();
    out << nameprod << "#";

    QString typeprod =  ui-> comboBox_typeProduct -> currentText();
    out << typeprod << "#";

    QString wv = ui -> comboBox_WV -> currentText();
    out << wv;

    QString weightprod = ui -> lineEdit_productWV -> text();
    out << weightprod << "#";

    QString priceprod = ui -> lineEdit_productPrice -> text();
    out << "$" << priceprod << "#";

    QString describtionprod = ui -> plainTextEdit_DescriptionProd -> toPlainText();
    out << describtionprod << "#";

    QString qty=ui->quantity->text();
    out<<qty<<"\n";

    itemFile.permissions();
    itemFile.flush();
    itemFile.close();
    close();


    }

}
