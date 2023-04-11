/********************************************************************************
** Form generated from reading UI file 'createnewaccount.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENEWACCOUNT_H
#define UI_CREATENEWACCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateNewAccount
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_Year;
    QLabel *label_14;
    QLineEdit *lineEdit_LastName;
    QLineEdit *lineEdit_Day;
    QLabel *label_3;
    QLineEdit *lineEdit_Email;
    QLineEdit *lineEdit_AdressLine2;
    QLabel *label_6;
    QLabel *label_10;
    QComboBox *comboBox_State;
    QLineEdit *lineEdit_ZipCode;
    QLineEdit *lineEdit_City;
    QLabel *label_7;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_UserName;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *lineEdit_PassWord;
    QLineEdit *lineEdit_FirstName;
    QLineEdit *lineEdit_AdressLine1;
    QLineEdit *lineEdit_Month;
    QLabel *label_5;
    QLineEdit *lineEdit_PhoneNumber;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_createAccount;
    QLabel *label_11;

    void setupUi(QDialog *CreateNewAccount)
    {
        if (CreateNewAccount->objectName().isEmpty())
            CreateNewAccount->setObjectName(QString::fromUtf8("CreateNewAccount"));
        CreateNewAccount->resize(488, 680);
        label = new QLabel(CreateNewAccount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 170, 281, 16));
        gridLayoutWidget = new QWidget(CreateNewAccount);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 210, 387, 422));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_Year = new QLineEdit(gridLayoutWidget);
        lineEdit_Year->setObjectName(QString::fromUtf8("lineEdit_Year"));

        gridLayout->addWidget(lineEdit_Year, 4, 5, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 2, 0, 1, 1);

        lineEdit_LastName = new QLineEdit(gridLayoutWidget);
        lineEdit_LastName->setObjectName(QString::fromUtf8("lineEdit_LastName"));

        gridLayout->addWidget(lineEdit_LastName, 1, 1, 1, 5);

        lineEdit_Day = new QLineEdit(gridLayoutWidget);
        lineEdit_Day->setObjectName(QString::fromUtf8("lineEdit_Day"));

        gridLayout->addWidget(lineEdit_Day, 4, 3, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_Email = new QLineEdit(gridLayoutWidget);
        lineEdit_Email->setObjectName(QString::fromUtf8("lineEdit_Email"));

        gridLayout->addWidget(lineEdit_Email, 5, 1, 1, 5);

        lineEdit_AdressLine2 = new QLineEdit(gridLayoutWidget);
        lineEdit_AdressLine2->setObjectName(QString::fromUtf8("lineEdit_AdressLine2"));

        gridLayout->addWidget(lineEdit_AdressLine2, 8, 1, 1, 5);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 11, 0, 1, 1);

        comboBox_State = new QComboBox(gridLayoutWidget);
        comboBox_State->setObjectName(QString::fromUtf8("comboBox_State"));

        gridLayout->addWidget(comboBox_State, 10, 1, 1, 3);

        lineEdit_ZipCode = new QLineEdit(gridLayoutWidget);
        lineEdit_ZipCode->setObjectName(QString::fromUtf8("lineEdit_ZipCode"));

        gridLayout->addWidget(lineEdit_ZipCode, 11, 1, 1, 5);

        lineEdit_City = new QLineEdit(gridLayoutWidget);
        lineEdit_City->setObjectName(QString::fromUtf8("lineEdit_City"));

        gridLayout->addWidget(lineEdit_City, 9, 1, 1, 5);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 4, 1, 1);

        lineEdit_UserName = new QLineEdit(gridLayoutWidget);
        lineEdit_UserName->setObjectName(QString::fromUtf8("lineEdit_UserName"));

        gridLayout->addWidget(lineEdit_UserName, 2, 1, 1, 5);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 4, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 6, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_PassWord = new QLineEdit(gridLayoutWidget);
        lineEdit_PassWord->setObjectName(QString::fromUtf8("lineEdit_PassWord"));

        gridLayout->addWidget(lineEdit_PassWord, 3, 1, 1, 5);

        lineEdit_FirstName = new QLineEdit(gridLayoutWidget);
        lineEdit_FirstName->setObjectName(QString::fromUtf8("lineEdit_FirstName"));

        gridLayout->addWidget(lineEdit_FirstName, 0, 1, 1, 5);

        lineEdit_AdressLine1 = new QLineEdit(gridLayoutWidget);
        lineEdit_AdressLine1->setObjectName(QString::fromUtf8("lineEdit_AdressLine1"));

        gridLayout->addWidget(lineEdit_AdressLine1, 7, 1, 1, 5);

        lineEdit_Month = new QLineEdit(gridLayoutWidget);
        lineEdit_Month->setObjectName(QString::fromUtf8("lineEdit_Month"));

        gridLayout->addWidget(lineEdit_Month, 4, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        lineEdit_PhoneNumber = new QLineEdit(gridLayoutWidget);
        lineEdit_PhoneNumber->setObjectName(QString::fromUtf8("lineEdit_PhoneNumber"));

        gridLayout->addWidget(lineEdit_PhoneNumber, 6, 1, 1, 5);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 9, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 10, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(18, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 2, 1, 1);

        pushButton_createAccount = new QPushButton(CreateNewAccount);
        pushButton_createAccount->setObjectName(QString::fromUtf8("pushButton_createAccount"));
        pushButton_createAccount->setGeometry(QRect(260, 640, 181, 41));
        label_11 = new QLabel(CreateNewAccount);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 0, 151, 151));

        retranslateUi(CreateNewAccount);

        QMetaObject::connectSlotsByName(CreateNewAccount);
    } // setupUi

    void retranslateUi(QDialog *CreateNewAccount)
    {
        CreateNewAccount->setWindowTitle(QApplication::translate("CreateNewAccount", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CreateNewAccount", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Please Enter All your Informations Below</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("CreateNewAccount", "UserName", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CreateNewAccount", "First Name :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CreateNewAccount", "Adress line 1 :", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CreateNewAccount", "Zip Code :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CreateNewAccount", "Adress line 2 :", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("CreateNewAccount", "PasseWord", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CreateNewAccount", "DOB :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CreateNewAccount", "Last Name :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CreateNewAccount", "Phone Number :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CreateNewAccount", "Email Adress :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CreateNewAccount", "City :", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CreateNewAccount", "State :", 0, QApplication::UnicodeUTF8));
        pushButton_createAccount->setText(QApplication::translate("CreateNewAccount", "Create Account", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateNewAccount: public Ui_CreateNewAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWACCOUNT_H
