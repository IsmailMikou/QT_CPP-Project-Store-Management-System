/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#ifndef ADDITEMS_H
#define ADDITEMS_H

#include <QDialog>

namespace Ui {
class addItems;
}

class addItems : public QDialog
{
    Q_OBJECT

public:
    explicit addItems(QWidget *parent = nullptr);
    ~addItems();

private slots:
    void on_pushButton_saveProduct_clicked();

private:
    Ui::addItems *ui;
};

#endif // ADDITEMS_H
