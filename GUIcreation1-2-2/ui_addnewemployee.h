/********************************************************************************
** Form generated from reading UI file 'addnewemployee.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWEMPLOYEE_H
#define UI_ADDNEWEMPLOYEE_H

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

class Ui_addnewemployee
{
public:
    QPushButton *pushButton_addEmployee;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_AdressLine2EMP;
    QLineEdit *lineEdit_ZipCodeEMP;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_CityEMP;
    QLineEdit *lineEdit_YearEMP;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLineEdit *lineEdit_EmailEMP;
    QLabel *label_12;
    QLineEdit *lineEdit_AdressLine1EMP;
    QLineEdit *lineEdit_MonthEMP;
    QLineEdit *lineEdit_DayEMP;
    QLineEdit *lineEdit_LastNameEMP;
    QLabel *label_5;
    QLabel *label_7;
    QLineEdit *lineEdit_PhoneNumberEMP;
    QLineEdit *lineEdit_FirstNameEMP;
    QLabel *label_10;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_11;
    QComboBox *comboBox_StateEMP;
    QLineEdit *lineEdit_jobEMP;
    QLineEdit *lineEdit_salaryEMP;
    QLabel *label_13;
    QPushButton *pushButton_registerEmployee;

    void setupUi(QDialog *addnewemployee)
    {
        if (addnewemployee->objectName().isEmpty())
            addnewemployee->setObjectName(QString::fromUtf8("addnewemployee"));
        addnewemployee->resize(561, 509);
        pushButton_addEmployee = new QPushButton(addnewemployee);
        pushButton_addEmployee->setObjectName(QString::fromUtf8("pushButton_addEmployee"));
        pushButton_addEmployee->setGeometry(QRect(430, 570, 113, 32));
        gridLayoutWidget = new QWidget(addnewemployee);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(90, 50, 387, 422));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 6, 1, 1);

        lineEdit_AdressLine2EMP = new QLineEdit(gridLayoutWidget);
        lineEdit_AdressLine2EMP->setObjectName(QString::fromUtf8("lineEdit_AdressLine2EMP"));

        gridLayout->addWidget(lineEdit_AdressLine2EMP, 6, 1, 1, 5);

        lineEdit_ZipCodeEMP = new QLineEdit(gridLayoutWidget);
        lineEdit_ZipCodeEMP->setObjectName(QString::fromUtf8("lineEdit_ZipCodeEMP"));

        gridLayout->addWidget(lineEdit_ZipCodeEMP, 9, 1, 1, 5);

        horizontalSpacer_3 = new QSpacerItem(18, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        lineEdit_CityEMP = new QLineEdit(gridLayoutWidget);
        lineEdit_CityEMP->setObjectName(QString::fromUtf8("lineEdit_CityEMP"));

        gridLayout->addWidget(lineEdit_CityEMP, 7, 1, 1, 5);

        lineEdit_YearEMP = new QLineEdit(gridLayoutWidget);
        lineEdit_YearEMP->setObjectName(QString::fromUtf8("lineEdit_YearEMP"));

        gridLayout->addWidget(lineEdit_YearEMP, 2, 5, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 4, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_EmailEMP = new QLineEdit(gridLayoutWidget);
        lineEdit_EmailEMP->setObjectName(QString::fromUtf8("lineEdit_EmailEMP"));

        gridLayout->addWidget(lineEdit_EmailEMP, 3, 1, 1, 5);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 2, 0, 1, 1);

        lineEdit_AdressLine1EMP = new QLineEdit(gridLayoutWidget);
        lineEdit_AdressLine1EMP->setObjectName(QString::fromUtf8("lineEdit_AdressLine1EMP"));

        gridLayout->addWidget(lineEdit_AdressLine1EMP, 5, 1, 1, 5);

        lineEdit_MonthEMP = new QLineEdit(gridLayoutWidget);
        lineEdit_MonthEMP->setObjectName(QString::fromUtf8("lineEdit_MonthEMP"));

        gridLayout->addWidget(lineEdit_MonthEMP, 2, 1, 1, 1);

        lineEdit_DayEMP = new QLineEdit(gridLayoutWidget);
        lineEdit_DayEMP->setObjectName(QString::fromUtf8("lineEdit_DayEMP"));

        gridLayout->addWidget(lineEdit_DayEMP, 2, 3, 1, 1);

        lineEdit_LastNameEMP = new QLineEdit(gridLayoutWidget);
        lineEdit_LastNameEMP->setObjectName(QString::fromUtf8("lineEdit_LastNameEMP"));

        gridLayout->addWidget(lineEdit_LastNameEMP, 1, 1, 1, 5);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        lineEdit_PhoneNumberEMP = new QLineEdit(gridLayoutWidget);
        lineEdit_PhoneNumberEMP->setObjectName(QString::fromUtf8("lineEdit_PhoneNumberEMP"));

        gridLayout->addWidget(lineEdit_PhoneNumberEMP, 4, 1, 1, 5);

        lineEdit_FirstNameEMP = new QLineEdit(gridLayoutWidget);
        lineEdit_FirstNameEMP->setObjectName(QString::fromUtf8("lineEdit_FirstNameEMP"));

        gridLayout->addWidget(lineEdit_FirstNameEMP, 0, 1, 1, 5);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 10, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 11, 0, 1, 1);

        comboBox_StateEMP = new QComboBox(gridLayoutWidget);
        comboBox_StateEMP->setObjectName(QString::fromUtf8("comboBox_StateEMP"));

        gridLayout->addWidget(comboBox_StateEMP, 8, 1, 1, 5);

        lineEdit_jobEMP = new QLineEdit(gridLayoutWidget);
        lineEdit_jobEMP->setObjectName(QString::fromUtf8("lineEdit_jobEMP"));

        gridLayout->addWidget(lineEdit_jobEMP, 10, 1, 1, 5);

        lineEdit_salaryEMP = new QLineEdit(gridLayoutWidget);
        lineEdit_salaryEMP->setObjectName(QString::fromUtf8("lineEdit_salaryEMP"));

        gridLayout->addWidget(lineEdit_salaryEMP, 11, 1, 1, 5);

        label_13 = new QLabel(addnewemployee);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(170, 10, 211, 31));
        pushButton_registerEmployee = new QPushButton(addnewemployee);
        pushButton_registerEmployee->setObjectName(QString::fromUtf8("pushButton_registerEmployee"));
        pushButton_registerEmployee->setGeometry(QRect(332, 480, 141, 32));

        retranslateUi(addnewemployee);

        QMetaObject::connectSlotsByName(addnewemployee);
    } // setupUi

    void retranslateUi(QDialog *addnewemployee)
    {
        addnewemployee->setWindowTitle(QApplication::translate("addnewemployee", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_addEmployee->setText(QApplication::translate("addnewemployee", "Add Employee", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("addnewemployee", "State :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("addnewemployee", "Last Name :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("addnewemployee", "Adress line 1 :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("addnewemployee", "Email Adress :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("addnewemployee", "First Name :", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("addnewemployee", "DOB :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("addnewemployee", "Phone Number :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("addnewemployee", "Adress line 2 :", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("addnewemployee", "Zip Code :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("addnewemployee", "Job :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("addnewemployee", "City :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("addnewemployee", "Salary :", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("addnewemployee", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; font-style:italic; text-decoration: underline;\">Adding New Employee</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_registerEmployee->setText(QApplication::translate("addnewemployee", "Register Employee", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addnewemployee: public Ui_addnewemployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWEMPLOYEE_H
