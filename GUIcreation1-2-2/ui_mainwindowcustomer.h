/********************************************************************************
** Form generated from reading UI file 'mainwindowcustomer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWCUSTOMER_H
#define UI_MAINWINDOWCUSTOMER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindowcustomer
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QPushButton *cartButton;
    QPushButton *ordersButton;
    QPushButton *startShoppingButton;
    QLabel *label_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *label_11;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_2;
    QCommandLinkButton *signOffButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainwindowcustomer)
    {
        if (mainwindowcustomer->objectName().isEmpty())
            mainwindowcustomer->setObjectName(QString::fromUtf8("mainwindowcustomer"));
        mainwindowcustomer->resize(680, 750);
        centralwidget = new QWidget(mainwindowcustomer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(130, 240, 421, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 4, 1, 1);

        cartButton = new QPushButton(gridLayoutWidget);
        cartButton->setObjectName(QString::fromUtf8("cartButton"));
        cartButton->setMinimumSize(QSize(80, 90));

        gridLayout->addWidget(cartButton, 0, 2, 1, 1);

        ordersButton = new QPushButton(gridLayoutWidget);
        ordersButton->setObjectName(QString::fromUtf8("ordersButton"));
        ordersButton->setMinimumSize(QSize(80, 90));

        gridLayout->addWidget(ordersButton, 0, 4, 1, 1);

        startShoppingButton = new QPushButton(gridLayoutWidget);
        startShoppingButton->setObjectName(QString::fromUtf8("startShoppingButton"));
        startShoppingButton->setMinimumSize(QSize(80, 90));

        gridLayout->addWidget(startShoppingButton, 0, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 0, 151, 151));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(457, 0, 221, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dateTimeEdit = new QDateTimeEdit(verticalLayoutWidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        verticalLayout->addWidget(dateTimeEdit);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        signOffButton = new QCommandLinkButton(verticalLayoutWidget);
        signOffButton->setObjectName(QString::fromUtf8("signOffButton"));

        verticalLayout->addWidget(signOffButton);

        mainwindowcustomer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainwindowcustomer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 680, 22));
        mainwindowcustomer->setMenuBar(menubar);
        statusbar = new QStatusBar(mainwindowcustomer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mainwindowcustomer->setStatusBar(statusbar);

        retranslateUi(mainwindowcustomer);

        QMetaObject::connectSlotsByName(mainwindowcustomer);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindowcustomer)
    {
        mainwindowcustomer->setWindowTitle(QApplication::translate("mainwindowcustomer", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("mainwindowcustomer", "<html><head/><body><p>My Orders</p></body></html>", 0, QApplication::UnicodeUTF8));
        cartButton->setText(QString());
        ordersButton->setText(QString());
        startShoppingButton->setText(QString());
        label_4->setText(QApplication::translate("mainwindowcustomer", "Cart", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("mainwindowcustomer", "<html><head/><body><p>Start</p><p>Shopping</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        label_2->setText(QApplication::translate("mainwindowcustomer", "Status : Connected", 0, QApplication::UnicodeUTF8));
        signOffButton->setText(QApplication::translate("mainwindowcustomer", "SIGN OFF", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mainwindowcustomer: public Ui_mainwindowcustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWCUSTOMER_H
