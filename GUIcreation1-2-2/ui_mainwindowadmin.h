/********************************************************************************
** Form generated from reading UI file 'mainwindowadmin.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWADMIN_H
#define UI_MAINWINDOWADMIN_H

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

class Ui_MainWindowAdmin
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_5;
    QPushButton *salesButton;
    QPushButton *customersButton;
    QLabel *label_4;
    QPushButton *productsButton;
    QPushButton *statisticsButton;
    QLabel *label_8;
    QPushButton *employeesButton;
    QLabel *label_9;
    QPushButton *alertButton;
    QLabel *notificationLabel;
    QPushButton *orderByID;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label;
    QLabel *label_2;
    QCommandLinkButton *signOffButton;
    QLabel *label_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowAdmin)
    {
        if (MainWindowAdmin->objectName().isEmpty())
            MainWindowAdmin->setObjectName(QString::fromUtf8("MainWindowAdmin"));
        MainWindowAdmin->resize(680, 750);
        centralwidget = new QWidget(MainWindowAdmin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(100, 170, 481, 291));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 1, 1, 1);

        salesButton = new QPushButton(gridLayoutWidget);
        salesButton->setObjectName(QString::fromUtf8("salesButton"));
        salesButton->setMinimumSize(QSize(80, 90));

        gridLayout->addWidget(salesButton, 0, 1, 1, 1);

        customersButton = new QPushButton(gridLayoutWidget);
        customersButton->setObjectName(QString::fromUtf8("customersButton"));
        customersButton->setMinimumSize(QSize(80, 90));

        gridLayout->addWidget(customersButton, 0, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        productsButton = new QPushButton(gridLayoutWidget);
        productsButton->setObjectName(QString::fromUtf8("productsButton"));
        productsButton->setMinimumSize(QSize(80, 80));

        gridLayout->addWidget(productsButton, 0, 0, 1, 1);

        statisticsButton = new QPushButton(gridLayoutWidget);
        statisticsButton->setObjectName(QString::fromUtf8("statisticsButton"));
        statisticsButton->setMinimumSize(QSize(80, 90));

        gridLayout->addWidget(statisticsButton, 3, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        employeesButton = new QPushButton(gridLayoutWidget);
        employeesButton->setObjectName(QString::fromUtf8("employeesButton"));
        employeesButton->setMinimumSize(QSize(80, 90));

        gridLayout->addWidget(employeesButton, 3, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 4, 1, 1, 1);

        alertButton = new QPushButton(gridLayoutWidget);
        alertButton->setObjectName(QString::fromUtf8("alertButton"));
        alertButton->setMinimumSize(QSize(80, 80));

        gridLayout->addWidget(alertButton, 3, 2, 1, 1);

        notificationLabel = new QLabel(gridLayoutWidget);
        notificationLabel->setObjectName(QString::fromUtf8("notificationLabel"));

        gridLayout->addWidget(notificationLabel, 4, 2, 1, 1);

        orderByID = new QPushButton(gridLayoutWidget);
        orderByID->setObjectName(QString::fromUtf8("orderByID"));

        gridLayout->addWidget(orderByID, 2, 1, 1, 1);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(510, 0, 174, 113));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dateTimeEdit = new QDateTimeEdit(verticalLayoutWidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        verticalLayout->addWidget(dateTimeEdit);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        signOffButton = new QCommandLinkButton(verticalLayoutWidget);
        signOffButton->setObjectName(QString::fromUtf8("signOffButton"));

        verticalLayout->addWidget(signOffButton);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 0, 151, 151));
        MainWindowAdmin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowAdmin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 680, 22));
        MainWindowAdmin->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowAdmin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowAdmin->setStatusBar(statusbar);

        retranslateUi(MainWindowAdmin);

        QMetaObject::connectSlotsByName(MainWindowAdmin);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowAdmin)
    {
        MainWindowAdmin->setWindowTitle(QApplication::translate("MainWindowAdmin", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindowAdmin", "Products", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindowAdmin", "Sales", 0, QApplication::UnicodeUTF8));
        salesButton->setText(QString());
        customersButton->setText(QString());
        label_4->setText(QApplication::translate("MainWindowAdmin", "Customers", 0, QApplication::UnicodeUTF8));
        productsButton->setText(QString());
        statisticsButton->setText(QString());
        label_8->setText(QApplication::translate("MainWindowAdmin", "Statistics", 0, QApplication::UnicodeUTF8));
        employeesButton->setText(QString());
        label_9->setText(QApplication::translate("MainWindowAdmin", "Employees", 0, QApplication::UnicodeUTF8));
        alertButton->setText(QString());
        notificationLabel->setText(QApplication::translate("MainWindowAdmin", "Alerts and Notifications", 0, QApplication::UnicodeUTF8));
        orderByID->setText(QApplication::translate("MainWindowAdmin", "Get Order By Order ID", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindowAdmin", "ADMIN ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindowAdmin", "Status : Connected", 0, QApplication::UnicodeUTF8));
        signOffButton->setText(QApplication::translate("MainWindowAdmin", "SIGN OFF", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindowAdmin: public Ui_MainWindowAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWADMIN_H
