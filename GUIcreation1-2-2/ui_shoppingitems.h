/********************************************************************************
** Form generated from reading UI file 'shoppingitems.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGITEMS_H
#define UI_SHOPPINGITEMS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_shoppingItems
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *shoppingTable;
    QPushButton *pushButton;
    QSpinBox *quantity;
    QPushButton *pushButton_RemoveItem;

    void setupUi(QDialog *shoppingItems)
    {
        if (shoppingItems->objectName().isEmpty())
            shoppingItems->setObjectName(QString::fromUtf8("shoppingItems"));
        shoppingItems->resize(891, 511);
        buttonBox = new QDialogButtonBox(shoppingItems);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(440, 460, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        shoppingTable = new QTableWidget(shoppingItems);
        shoppingTable->setObjectName(QString::fromUtf8("shoppingTable"));
        shoppingTable->setGeometry(QRect(40, 40, 841, 391));
        pushButton = new QPushButton(shoppingItems);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 460, 101, 23));
        quantity = new QSpinBox(shoppingItems);
        quantity->setObjectName(QString::fromUtf8("quantity"));
        quantity->setGeometry(QRect(150, 461, 80, 22));
        pushButton_RemoveItem = new QPushButton(shoppingItems);
        pushButton_RemoveItem->setObjectName(QString::fromUtf8("pushButton_RemoveItem"));
        pushButton_RemoveItem->setGeometry(QRect(340, 460, 113, 32));

        retranslateUi(shoppingItems);
        QObject::connect(buttonBox, SIGNAL(accepted()), shoppingItems, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), shoppingItems, SLOT(reject()));

        QMetaObject::connectSlotsByName(shoppingItems);
    } // setupUi

    void retranslateUi(QDialog *shoppingItems)
    {
        shoppingItems->setWindowTitle(QApplication::translate("shoppingItems", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("shoppingItems", "Add to Cart", 0, QApplication::UnicodeUTF8));
        pushButton_RemoveItem->setText(QApplication::translate("shoppingItems", "Remove item", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class shoppingItems: public Ui_shoppingItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGITEMS_H
