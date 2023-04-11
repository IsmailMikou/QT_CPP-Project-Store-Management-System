/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#include "login.h"
#include "ui_login.h"
#include "forgotpassword.h"
#include <QPixmap>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QWidget>
#include "mainwindowcustomer.h"

LOGIN::LOGIN(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LOGIN)
{
    ui->setupUi(this);
    QPixmap pix (":/new/prefix1/logoImg/finalLogo.png");
    ui -> logoLabel -> setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));
}

LOGIN::~LOGIN()
{
    delete ui;
}


void LOGIN::on_Connect_Button_clicked()
{

    QString username = ui -> Login_Input -> text(); //username INPUT
    QString password = ui -> Password_Input -> text(); //password INPUT
    //Admin connection
    if (username == "Admin" && password == "1234") {
        QMessageBox::information(this, "Login", "Username and PassWord CORRECT");
        hide();
        mainWindowAdmin = new MainWindowAdmin(this);
        mainWindowAdmin ->showNormal();
    return;
    }

    //customer connection
    QFile customerFile ("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/customerFile.txt"); // open customer file
    customerFile.open(QIODevice::ReadOnly|QIODevice::Text); //we want to read it only

    QStringList customers=QString(customerFile.readAll()).split('\n'); // take line by line
    customers.removeAll("");

    foreach(QString customer,customers){
    QStringList cust=customer.split('#'); //split string when # in on the way
    QString user = cust.at(0); //first string in line is username
    QString pass = cust.at(1); //second string in line is password

//if both inputs are same as data in file
    if (user == username && pass == password ) {
        QMessageBox::information(this, "Login", "Username and PassWord CORRECT");
        hide();
        mainWindowCustomer = new mainwindowcustomer(this);
        mainWindowCustomer->adminprod->username=user;
        mainWindowCustomer -> show();

        return;
    }
}
// if one of them or both are incorrect
QMessageBox::information(this, "Login", "Username or PassWord INCORRECT");
}


void LOGIN::on_commandLinkButton_CreatAccount_clicked()
{
    CreateNewAccount createnewaccount;
    createnewaccount.setModal(true);
    createnewaccount.exec();
}

void LOGIN::on_commandLinkButton_ForgotMyPassword_clicked()
{
    ForgotPassWord forgotpass;
    forgotpass.setModal(true);
    forgotpass.exec();
}

