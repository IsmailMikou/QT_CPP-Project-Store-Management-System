/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#include "forgotpassword.h"
#include "ui_forgotpassword.h"
#include "createnewaccount.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <iostream>
#include <QDebug>
#include <fstream>
#include <QIODevice>
#include <iostream>
#include<string>
#include <string.h>



ForgotPassWord::ForgotPassWord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ForgotPassWord)
{
    ui->setupUi(this);
    ui->lineEdit_FP_UserName ->setPlaceholderText(QString("Type here"));

}

ForgotPassWord::~ForgotPassWord()
{
    delete ui;
}




void ForgotPassWord::on_pushButton_DisplayPassWord_clicked()
{


    QFile customerFile ("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/customerFile.txt");


    customerFile.open(QIODevice::ReadOnly|QIODevice::Text);

    QStringList customers=QString(customerFile.readAll()).split('\n');
    customers.removeAll("");
    QString userNameSearched = ui -> lineEdit_FP_UserName -> text();
    QString EMailSearched = ui -> lineEdit_FP_EMail -> text();
    foreach(QString customer,customers){
    QStringList cust=customer.split('#'); //split everytime # in on the way
    QString user = cust.at(0); //first string in the line is username
    QString pass = cust.at(1); //second string in the line is password
    QString email = cust.at(4); // 5th string in the line in email

    //comparing inputs with data in textfile
    //if both same
    if (user == userNameSearched && email == EMailSearched) {
        ui -> textBrowser_DisplayPassWord -> setText("Password of *" + user + "* is : " + pass);
    }
    //if username wrong only
    else if (user != userNameSearched && email == EMailSearched) {
        ui -> textBrowser_DisplayPassWord -> setText("USERNAME provided is incorrect ");
    }
    //if email wrong only
    else if (user == userNameSearched && email != EMailSearched) {
        ui -> textBrowser_DisplayPassWord -> setText("EMAIL provided is incorrect ");
    }
    //if both wrong
    else  ui -> textBrowser_DisplayPassWord -> setText("USERNAME AND EMAIL DON'T EXIST");
    }
}







