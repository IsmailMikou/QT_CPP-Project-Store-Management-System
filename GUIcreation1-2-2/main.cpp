/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#include "login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LOGIN w;
    do{
    w.show();
    }
    while(a.exec()==4444);
    return 0;
}
