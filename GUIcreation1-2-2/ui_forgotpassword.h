/********************************************************************************
** Form generated from reading UI file 'forgotpassword.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSWORD_H
#define UI_FORGOTPASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ForgotPassWord
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_FP_EMail;
    QLineEdit *lineEdit_FP_UserName;
    QPushButton *pushButton_DisplayPassWord;
    QTextBrowser *textBrowser_DisplayPassWord;
    QLabel *label_3;

    void setupUi(QDialog *ForgotPassWord)
    {
        if (ForgotPassWord->objectName().isEmpty())
            ForgotPassWord->setObjectName(QString::fromUtf8("ForgotPassWord"));
        ForgotPassWord->resize(415, 461);
        gridLayoutWidget = new QWidget(ForgotPassWord);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(90, 130, 231, 71));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_FP_EMail = new QLineEdit(gridLayoutWidget);
        lineEdit_FP_EMail->setObjectName(QString::fromUtf8("lineEdit_FP_EMail"));

        gridLayout->addWidget(lineEdit_FP_EMail, 1, 1, 1, 1);

        lineEdit_FP_UserName = new QLineEdit(gridLayoutWidget);
        lineEdit_FP_UserName->setObjectName(QString::fromUtf8("lineEdit_FP_UserName"));

        gridLayout->addWidget(lineEdit_FP_UserName, 0, 1, 1, 1);

        pushButton_DisplayPassWord = new QPushButton(ForgotPassWord);
        pushButton_DisplayPassWord->setObjectName(QString::fromUtf8("pushButton_DisplayPassWord"));
        pushButton_DisplayPassWord->setGeometry(QRect(190, 210, 141, 32));
        textBrowser_DisplayPassWord = new QTextBrowser(ForgotPassWord);
        textBrowser_DisplayPassWord->setObjectName(QString::fromUtf8("textBrowser_DisplayPassWord"));
        textBrowser_DisplayPassWord->setGeometry(QRect(40, 260, 291, 91));
        label_3 = new QLabel(ForgotPassWord);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 50, 421, 51));

        retranslateUi(ForgotPassWord);

        QMetaObject::connectSlotsByName(ForgotPassWord);
    } // setupUi

    void retranslateUi(QDialog *ForgotPassWord)
    {
        ForgotPassWord->setWindowTitle(QApplication::translate("ForgotPassWord", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ForgotPassWord", "UserName :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ForgotPassWord", "eMail :", 0, QApplication::UnicodeUTF8));
        pushButton_DisplayPassWord->setText(QApplication::translate("ForgotPassWord", "Display PassWord", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ForgotPassWord", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; font-style:italic; text-decoration: underline;\">PLEASE ENTER YOUR USERNAME AND EMAIL</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ForgotPassWord: public Ui_ForgotPassWord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
