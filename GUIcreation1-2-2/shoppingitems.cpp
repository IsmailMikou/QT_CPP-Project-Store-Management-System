/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#include "shoppingitems.h"
#include "ui_shoppingitems.h"
#include<QFile>
#include<QMessageBox>
#include<QDebug>
shoppingItems::shoppingItems(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shoppingItems)
{
    ui->setupUi(this);
    setWindowTitle("Start Shopping");
    QFile cartsFile("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/Items.txt");
    cartsFile.open(QIODevice::ReadOnly|QIODevice::Text);
    QByteArray data=cartsFile.readAll();
    QStringList cartsData=QString(data).split('\n');
    cartsData.removeAll("");
    qDebug()<<cartsData;

    //add rows and columns
    ui->shoppingTable->setRowCount(cartsData.size());
    ui->shoppingTable->setColumnCount(7);

    QStringList headers=QStringList()<<"ID"<<"NAME"<<"TYPE"<<"WEIGHT/VOLUME"<<"UNIT PRICE"<<"DESCRIPTION"<<"IN STOCK";
        ui->shoppingTable->setHorizontalHeaderLabels(headers);

        QStringList cartData;

        for(int i=0;i<cartsData.size();i++){

            cartData=cartsData.at(i).split('#');
            if(cartData.size()<=1)
                break;
            if(cartData.at(6).toInt()==0) //if the item is 0 (out of stock), don't show it in shopping list
                break;
            for(int j=0;j<cartData.size();j++)

               ui->shoppingTable->setItem(i,j,new QTableWidgetItem(cartData.at(j)));
        }
}

shoppingItems::~shoppingItems()
{
    delete ui;
}

void shoppingItems::on_buttonBox_accepted()
{

}
#include <QDebug>
void shoppingItems::on_pushButton_clicked() //add to cart
{
    QFile itemsFile("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/Items.txt");
    itemsFile.open(QIODevice::WriteOnly|QIODevice::Text);
        int i=ui->shoppingTable->currentRow();
        QStringList item;

        for(int j=0;j<ui->shoppingTable->columnCount();j++)
                 item.append(ui->shoppingTable->item(i,j)->text());

        float val=item.at(4).toUtf8().replace("$","").toFloat();
        float availableqty=item.at(6).toInt();
        float qty=ui->quantity->value();
        float total = qty * val; //??



        if(qty<=availableqty){
            item[6]=QString::number(qty);
            qDebug()<<item;
        QMessageBox::information(this, "Added", "Item Added To Cart");
        qDebug()<<qty<<val<<item;
        cartData.append(item.join('#')+'#'+QByteArray::number(total)); //qty*val inside
        ui->shoppingTable->item(i,6)->setText(QString::number(availableqty-qty));

        for(int i=0;i<ui->shoppingTable->rowCount();i++){
            QStringList line;
            for(int j=0;j<ui->shoppingTable->columnCount();j++){
                QString text=ui->shoppingTable->item(i,j)->text();
                line.append(text);
            }
            itemsFile.write(line.join("#").toUtf8()+'\n');
        }
        itemsFile.flush();
        itemsFile.close();
        return;
        }
        //if 0 in stock, can't buy
        if (availableqty == 0) {
        QMessageBox::information(this, "Cannot Add Item to Cart", "Cannot Add Item to Cart\nPlease Check the Quantity");
        }
}
