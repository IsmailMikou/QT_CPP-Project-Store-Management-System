/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#include "employee.h"
#include "ui_employee.h"
#include <QFile>


employee::employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employee)
{
    ui->setupUi(this);
    QFile employeeFile ("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/employee.txt");
    employeeFile.open(QIODevice::ReadOnly|QIODevice::Text);
    QByteArray data=employeeFile.readAll();
    QStringList productsData=QString(data).split('\n');

    QStringList headers=QStringList()<<"Full Name"<<"Email"<<"Phone"<<"DOB"<<"Adress"<<"Job"<<"Salary/H"; //header for employees table


        ui->tableWidget_showEMP->setHorizontalHeaderLabels(headers);
        //ui-> tableWidget_showEMP->setVerticalHeaderLabels();

        //add rows and columns
        ui->tableWidget_showEMP->setRowCount(productsData.size());
        ui->tableWidget_showEMP->setColumnCount(7);
        QStringList productData;
        for(int i=0;i<productsData.size();i++){
            productData=productsData.at(i).split('#'); //split everytime # in on the way
            for(int j=0;j<productData.size();j++)
                ui->tableWidget_showEMP->setItem(i,j,new QTableWidgetItem(productData.at(j)));
        }

}

employee::~employee()
{
    delete ui;
}

void employee::on_pushButton_addEmployee_clicked()
{
    newEmp = new addnewemployee(this);
    newEmp -> show();
}
