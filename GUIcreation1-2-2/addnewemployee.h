/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#ifndef ADDNEWEMPLOYEE_H
#define ADDNEWEMPLOYEE_H

#include <QDialog>

namespace Ui {
class addnewemployee;
}

class addnewemployee : public QDialog
{
    Q_OBJECT

public:
    explicit addnewemployee(QWidget *parent = nullptr);
    ~addnewemployee();

private slots:
    void on_pushButton_registerEmployee_clicked();

private:
    Ui::addnewemployee *ui;
};

#endif // ADDNEWEMPLOYEE_H
