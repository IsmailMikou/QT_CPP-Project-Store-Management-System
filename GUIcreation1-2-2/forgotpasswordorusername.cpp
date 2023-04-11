#include "forgotpasswordorusername.h"
#include "ui_forgotpasswordorusername.h"

forgotPassWordOrUserName::forgotPassWordOrUserName(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::forgotPassWordOrUserName)
{
    ui->setupUi(this);

}

forgotPassWordOrUserName::~forgotPassWordOrUserName()
{
    delete ui;
}
