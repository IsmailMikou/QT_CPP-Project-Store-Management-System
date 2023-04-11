/********************************************************************************
** Form generated from reading UI file 'employee.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_H
#define UI_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_employee
{
public:
    QTableWidget *tableWidget_showEMP;
    QPushButton *pushButton_addEmployee;
    QLabel *label;

    void setupUi(QDialog *employee)
    {
        if (employee->objectName().isEmpty())
            employee->setObjectName(QString::fromUtf8("employee"));
        employee->resize(793, 422);
        tableWidget_showEMP = new QTableWidget(employee);
        if (tableWidget_showEMP->columnCount() < 7)
            tableWidget_showEMP->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_showEMP->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_showEMP->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_showEMP->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_showEMP->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_showEMP->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_showEMP->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_showEMP->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget_showEMP->rowCount() < 13)
            tableWidget_showEMP->setRowCount(13);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_showEMP->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_showEMP->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_showEMP->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_showEMP->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_showEMP->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_showEMP->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_showEMP->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_showEMP->setVerticalHeaderItem(7, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_showEMP->setVerticalHeaderItem(8, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_showEMP->setVerticalHeaderItem(9, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_showEMP->setVerticalHeaderItem(10, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_showEMP->setVerticalHeaderItem(11, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_showEMP->setVerticalHeaderItem(12, __qtablewidgetitem19);
        tableWidget_showEMP->setObjectName(QString::fromUtf8("tableWidget_showEMP"));
        tableWidget_showEMP->setGeometry(QRect(20, 60, 761, 211));
        pushButton_addEmployee = new QPushButton(employee);
        pushButton_addEmployee->setObjectName(QString::fromUtf8("pushButton_addEmployee"));
        pushButton_addEmployee->setGeometry(QRect(642, 280, 141, 32));
        label = new QLabel(employee);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 20, 281, 21));

        retranslateUi(employee);

        QMetaObject::connectSlotsByName(employee);
    } // setupUi

    void retranslateUi(QDialog *employee)
    {
        employee->setWindowTitle(QApplication::translate("employee", "Dialog", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_showEMP->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("employee", "New Column", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_showEMP->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("employee", "New Column", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_showEMP->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("employee", "New Column", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_showEMP->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("employee", "New Column", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_showEMP->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("employee", "New Column", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_showEMP->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("employee", "New Column", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_showEMP->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("employee", "New Column", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_showEMP->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("employee", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_showEMP->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("employee", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_showEMP->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("employee", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_showEMP->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("employee", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_showEMP->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("employee", "5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_showEMP->verticalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("employee", "6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_showEMP->verticalHeaderItem(6);
        ___qtablewidgetitem13->setText(QApplication::translate("employee", "7", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_showEMP->verticalHeaderItem(7);
        ___qtablewidgetitem14->setText(QApplication::translate("employee", "8", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_showEMP->verticalHeaderItem(8);
        ___qtablewidgetitem15->setText(QApplication::translate("employee", "9", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_showEMP->verticalHeaderItem(9);
        ___qtablewidgetitem16->setText(QApplication::translate("employee", "10", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_showEMP->verticalHeaderItem(10);
        ___qtablewidgetitem17->setText(QApplication::translate("employee", "11", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_showEMP->verticalHeaderItem(11);
        ___qtablewidgetitem18->setText(QApplication::translate("employee", "12", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_showEMP->verticalHeaderItem(12);
        ___qtablewidgetitem19->setText(QApplication::translate("employee", "13", 0, QApplication::UnicodeUTF8));
        pushButton_addEmployee->setText(QApplication::translate("employee", "Add New Employee", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("employee", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; font-style:italic; text-decoration: underline;\">EMPLOYEES DATABASE</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class employee: public Ui_employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_H
