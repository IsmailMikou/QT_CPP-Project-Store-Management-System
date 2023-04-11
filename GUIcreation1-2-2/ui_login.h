/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LOGIN
{
public:
    QWidget *centralwidget;
    QLineEdit *Login_Input;
    QLabel *Login_Label;
    QLabel *Password_Label;
    QLineEdit *Password_Input;
    QPushButton *Connect_Button;
    QCommandLinkButton *commandLinkButton_CreatAccount;
    QLabel *logoLabel;
    QCommandLinkButton *commandLinkButton_ForgotMyPassword;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LOGIN)
    {
        if (LOGIN->objectName().isEmpty())
            LOGIN->setObjectName(QString::fromUtf8("LOGIN"));
        LOGIN->resize(800, 600);
        centralwidget = new QWidget(LOGIN);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Login_Input = new QLineEdit(centralwidget);
        Login_Input->setObjectName(QString::fromUtf8("Login_Input"));
        Login_Input->setGeometry(QRect(330, 100, 241, 21));
        Login_Label = new QLabel(centralwidget);
        Login_Label->setObjectName(QString::fromUtf8("Login_Label"));
        Login_Label->setGeometry(QRect(230, 100, 91, 16));
        Password_Label = new QLabel(centralwidget);
        Password_Label->setObjectName(QString::fromUtf8("Password_Label"));
        Password_Label->setGeometry(QRect(230, 140, 91, 16));
        Password_Input = new QLineEdit(centralwidget);
        Password_Input->setObjectName(QString::fromUtf8("Password_Input"));
        Password_Input->setGeometry(QRect(330, 140, 241, 21));
        Password_Input->setEchoMode(QLineEdit::Password);
        Connect_Button = new QPushButton(centralwidget);
        Connect_Button->setObjectName(QString::fromUtf8("Connect_Button"));
        Connect_Button->setGeometry(QRect(460, 170, 113, 32));
        Connect_Button->setAutoDefault(true);
        Connect_Button->setDefault(true);
        commandLinkButton_CreatAccount = new QCommandLinkButton(centralwidget);
        commandLinkButton_CreatAccount->setObjectName(QString::fromUtf8("commandLinkButton_CreatAccount"));
        commandLinkButton_CreatAccount->setGeometry(QRect(440, 280, 131, 41));
        logoLabel = new QLabel(centralwidget);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setGeometry(QRect(0, 0, 161, 151));
        commandLinkButton_ForgotMyPassword = new QCommandLinkButton(centralwidget);
        commandLinkButton_ForgotMyPassword->setObjectName(QString::fromUtf8("commandLinkButton_ForgotMyPassword"));
        commandLinkButton_ForgotMyPassword->setGeometry(QRect(440, 240, 131, 41));
        LOGIN->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LOGIN);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LOGIN->setStatusBar(statusbar);

        retranslateUi(LOGIN);

        QMetaObject::connectSlotsByName(LOGIN);
    } // setupUi

    void retranslateUi(QMainWindow *LOGIN)
    {
        LOGIN->setWindowTitle(QApplication::translate("LOGIN", "LOGIN", 0, QApplication::UnicodeUTF8));
        Login_Input->setText(QString());
        Login_Label->setText(QApplication::translate("LOGIN", "UserName", 0, QApplication::UnicodeUTF8));
        Password_Label->setText(QApplication::translate("LOGIN", "PassWord", 0, QApplication::UnicodeUTF8));
        Password_Input->setText(QString());
        Connect_Button->setText(QApplication::translate("LOGIN", "Connect", 0, QApplication::UnicodeUTF8));
        commandLinkButton_CreatAccount->setText(QApplication::translate("LOGIN", "Creat a New Account!", 0, QApplication::UnicodeUTF8));
        logoLabel->setText(QString());
        commandLinkButton_ForgotMyPassword->setText(QApplication::translate("LOGIN", "Forgot my Password", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LOGIN: public Ui_LOGIN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
