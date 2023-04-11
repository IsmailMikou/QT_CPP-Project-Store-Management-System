/********************************************************************************
** Form generated from reading UI file 'quitdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUITDIALOG_H
#define UI_QUITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuitDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *QuitDialog)
    {
        if (QuitDialog->objectName().isEmpty())
            QuitDialog->setObjectName(QString::fromUtf8("QuitDialog"));
        QuitDialog->resize(464, 430);
        gridLayoutWidget = new QWidget(QuitDialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 140, 284, 131));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 8, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 8, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 6, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 1, 1, 1);


        retranslateUi(QuitDialog);

        QMetaObject::connectSlotsByName(QuitDialog);
    } // setupUi

    void retranslateUi(QDialog *QuitDialog)
    {
        QuitDialog->setWindowTitle(QApplication::translate("QuitDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QuitDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Are you sure you want to Sign Off?</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QuitDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; text-decoration: underline;\">Quit</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QuitDialog: public Ui_QuitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUITDIALOG_H
