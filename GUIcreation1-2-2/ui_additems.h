/********************************************************************************
** Form generated from reading UI file 'additems.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMS_H
#define UI_ADDITEMS_H

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
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addItems
{
public:
    QPushButton *pushButton_saveProduct;
    QLabel *label_7;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_nameProduct;
    QComboBox *comboBox_typeProduct;
    QLineEdit *lineEdit_productID;
    QLineEdit *lineEdit_productWV;
    QLabel *label_2;
    QLabel *label_4;
    QComboBox *comboBox_WV;
    QLabel *label_6;
    QLineEdit *lineEdit_productPrice;
    QPlainTextEdit *plainTextEdit_DescriptionProd;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QSpinBox *quantity;

    void setupUi(QDialog *addItems)
    {
        if (addItems->objectName().isEmpty())
            addItems->setObjectName(QString::fromUtf8("addItems"));
        addItems->resize(384, 429);
        pushButton_saveProduct = new QPushButton(addItems);
        pushButton_saveProduct->setObjectName(QString::fromUtf8("pushButton_saveProduct"));
        pushButton_saveProduct->setGeometry(QRect(230, 370, 131, 41));
        label_7 = new QLabel(addItems);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 30, 311, 31));
        gridLayoutWidget = new QWidget(addItems);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 60, 361, 311));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        lineEdit_nameProduct = new QLineEdit(gridLayoutWidget);
        lineEdit_nameProduct->setObjectName(QString::fromUtf8("lineEdit_nameProduct"));

        gridLayout->addWidget(lineEdit_nameProduct, 1, 5, 1, 1);

        comboBox_typeProduct = new QComboBox(gridLayoutWidget);
        comboBox_typeProduct->setObjectName(QString::fromUtf8("comboBox_typeProduct"));

        gridLayout->addWidget(comboBox_typeProduct, 0, 5, 1, 1);

        lineEdit_productID = new QLineEdit(gridLayoutWidget);
        lineEdit_productID->setObjectName(QString::fromUtf8("lineEdit_productID"));

        gridLayout->addWidget(lineEdit_productID, 2, 5, 1, 1);

        lineEdit_productWV = new QLineEdit(gridLayoutWidget);
        lineEdit_productWV->setObjectName(QString::fromUtf8("lineEdit_productWV"));

        gridLayout->addWidget(lineEdit_productWV, 3, 5, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        comboBox_WV = new QComboBox(gridLayoutWidget);
        comboBox_WV->setObjectName(QString::fromUtf8("comboBox_WV"));

        gridLayout->addWidget(comboBox_WV, 3, 4, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 2);

        lineEdit_productPrice = new QLineEdit(gridLayoutWidget);
        lineEdit_productPrice->setObjectName(QString::fromUtf8("lineEdit_productPrice"));

        gridLayout->addWidget(lineEdit_productPrice, 4, 5, 1, 1);

        plainTextEdit_DescriptionProd = new QPlainTextEdit(gridLayoutWidget);
        plainTextEdit_DescriptionProd->setObjectName(QString::fromUtf8("plainTextEdit_DescriptionProd"));

        gridLayout->addWidget(plainTextEdit_DescriptionProd, 6, 5, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 5, 0, 1, 1);

        quantity = new QSpinBox(gridLayoutWidget);
        quantity->setObjectName(QString::fromUtf8("quantity"));

        gridLayout->addWidget(quantity, 5, 5, 1, 1);


        retranslateUi(addItems);

        QMetaObject::connectSlotsByName(addItems);
    } // setupUi

    void retranslateUi(QDialog *addItems)
    {
        addItems->setWindowTitle(QApplication::translate("addItems", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_saveProduct->setText(QApplication::translate("addItems", "Save", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("addItems", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Adding New Product</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("addItems", "Product Type :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("addItems", "Weight/Volume", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("addItems", "<html><head/><body><p>Product</p><p>Description :</p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("addItems", "Product Name :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("addItems", "Price :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("addItems", "Product ID :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("addItems", "Quantity", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addItems: public Ui_addItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMS_H
