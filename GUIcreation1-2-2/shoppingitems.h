/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#ifndef SHOPPINGITEMS_H
#define SHOPPINGITEMS_H

#include <QDialog>

namespace Ui {
class shoppingItems;
}

class shoppingItems : public QDialog
{
    Q_OBJECT

public:
    explicit shoppingItems(QWidget *parent = nullptr);
    ~shoppingItems();
    QStringList cartData;
private slots:
    void on_buttonBox_accepted();

    void on_pushButton_clicked();

private:
    Ui::shoppingItems *ui;
};

#endif // SHOPPINGITEMS_H
