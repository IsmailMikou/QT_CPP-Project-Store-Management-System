/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "mainwindowadmin.h"
#include "mainwindowcustomer.h"
#include "createnewaccount.h"
#include "forgotpassword.h"



QT_BEGIN_NAMESPACE
namespace Ui { class LOGIN; }
QT_END_NAMESPACE

class LOGIN : public QMainWindow
{
    Q_OBJECT

public:
    LOGIN(QWidget *parent = nullptr);
    ~LOGIN();

private slots:
    void on_Connect_Button_clicked();

    void on_commandLinkButton_CreatAccount_clicked();


    //void on_commandLinkButton_ForgotMyPassword_clicked();


    void on_commandLinkButton_ForgotMyPassword_clicked();

private:
    Ui::LOGIN *ui;
    MainWindowAdmin *mainWindowAdmin;
    mainwindowcustomer *mainWindowCustomer;


};
#endif // LOGIN_H
