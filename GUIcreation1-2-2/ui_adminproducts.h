/********************************************************************************
** Form generated from reading UI file 'adminproducts.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPRODUCTS_H
#define UI_ADMINPRODUCTS_H

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

class Ui_AdminProducts
{
public:
    QPushButton *pushButton_addIterm;
    QTableWidget *tableWidget_Products;
    QLabel *label;
    QPushButton *checkout;
    QPushButton *getSales;
    QLabel *info;

    void setupUi(QDialog *AdminProducts)
    {
        if (AdminProducts->objectName().isEmpty())
            AdminProducts->setObjectName(QString::fromUtf8("AdminProducts"));
        AdminProducts->resize(897, 463);
        pushButton_addIterm = new QPushButton(AdminProducts);
        pushButton_addIterm->setObjectName(QString::fromUtf8("pushButton_addIterm"));
        pushButton_addIterm->setGeometry(QRect(520, 400, 113, 32));
        tableWidget_Products = new QTableWidget(AdminProducts);
        if (tableWidget_Products->columnCount() < 6)
            tableWidget_Products->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Products->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Products->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Products->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_Products->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_Products->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_Products->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget_Products->rowCount() < 12)
            tableWidget_Products->setRowCount(12);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_Products->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_Products->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_Products->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_Products->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_Products->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_Products->setVerticalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_Products->setVerticalHeaderItem(6, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_Products->setVerticalHeaderItem(7, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_Products->setVerticalHeaderItem(8, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_Products->setVerticalHeaderItem(9, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_Products->setVerticalHeaderItem(10, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_Products->setVerticalHeaderItem(11, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_Products->setItem(0, 0, __qtablewidgetitem18);
        tableWidget_Products->setObjectName(QString::fromUtf8("tableWidget_Products"));
        tableWidget_Products->setGeometry(QRect(10, 60, 881, 331));
        label = new QLabel(AdminProducts);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 20, 361, 31));
        checkout = new QPushButton(AdminProducts);
        checkout->setObjectName(QString::fromUtf8("checkout"));
        checkout->setGeometry(QRect(350, 400, 111, 31));
        getSales = new QPushButton(AdminProducts);
        getSales->setObjectName(QString::fromUtf8("getSales"));
        getSales->setGeometry(QRect(210, 400, 111, 31));
        info = new QLabel(AdminProducts);
        info->setObjectName(QString::fromUtf8("info"));
        info->setGeometry(QRect(660, 400, 201, 61));

        retranslateUi(AdminProducts);

        QMetaObject::connectSlotsByName(AdminProducts);
    } // setupUi

    void retranslateUi(QDialog *AdminProducts)
    {
        AdminProducts->setWindowTitle(QApplication::translate("AdminProducts", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_addIterm->setText(QApplication::translate("AdminProducts", "Add Item", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Products->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AdminProducts", "ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Products->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AdminProducts", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Products->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("AdminProducts", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Products->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("AdminProducts", "Weight/Volume", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_Products->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("AdminProducts", "Unit Price", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_Products->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("AdminProducts", "Description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_Products->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("AdminProducts", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_Products->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("AdminProducts", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_Products->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("AdminProducts", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_Products->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("AdminProducts", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_Products->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("AdminProducts", "5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_Products->verticalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("AdminProducts", "6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_Products->verticalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("AdminProducts", "7", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_Products->verticalHeaderItem(7);
        ___qtablewidgetitem13->setText(QApplication::translate("AdminProducts", "8", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_Products->verticalHeaderItem(8);
        ___qtablewidgetitem14->setText(QApplication::translate("AdminProducts", "9", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_Products->verticalHeaderItem(9);
        ___qtablewidgetitem15->setText(QApplication::translate("AdminProducts", "10", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_Products->verticalHeaderItem(10);
        ___qtablewidgetitem16->setText(QApplication::translate("AdminProducts", "11", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_Products->verticalHeaderItem(11);
        ___qtablewidgetitem17->setText(QApplication::translate("AdminProducts", "12", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = tableWidget_Products->isSortingEnabled();
        tableWidget_Products->setSortingEnabled(false);
        tableWidget_Products->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("AdminProducts", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; font-style:italic; text-decoration: underline;\">List Of Products</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        checkout->setText(QApplication::translate("AdminProducts", "Checkout", 0, QApplication::UnicodeUTF8));
        getSales->setText(QApplication::translate("AdminProducts", "Get Sales", 0, QApplication::UnicodeUTF8));
        info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminProducts: public Ui_AdminProducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPRODUCTS_H
