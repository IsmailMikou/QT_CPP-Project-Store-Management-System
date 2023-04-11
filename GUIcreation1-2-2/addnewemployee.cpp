/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#include "addnewemployee.h"
#include "ui_addnewemployee.h"
#include <QComboBox>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

addnewemployee::addnewemployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addnewemployee)
{
    ui->setupUi(this);

    //states combobox
    QStringList listStates=(QStringList()<< "  " <<"AL" << "AK" << "AZ" <<"AR" << "CA" << "CO" << "CT"<< "DE" << "FL"
                                   << "GA" << "HI" << "ID" <<"IL" << "IN" << "IA" << "KS" << "KY"<< "LA"
                                   << "ME" << "MD" << "MA" <<"MI" << "MN" << "MS" << "MO" << "MT"<< "NE"
                                   << "NV" << "NH" << "NJ" <<"NM" << "NY" << "NC" << "ND" << "OH"<< "OK"
                                   << "OR" << "PA" << "RI" << "SC" << "SD" << "TN" << "TX" << "UT" << "VT"
                                   << "VA" << "WA" << "WV" << "WI" << "WY");

    ui -> comboBox_StateEMP -> addItems(listStates);//add state's list to combobox
}

addnewemployee::~addnewemployee()
{
    delete ui;
}

void addnewemployee::on_pushButton_registerEmployee_clicked()
{
    QFile employeeFile ("/Users/ismailmikou/Desktop/CIT284FinalProject/GUIcreation1-2-2/employee.txt");

    if(!employeeFile.open(QIODevice::ReadWrite | QIODevice::Append)) {
        QMessageBox::warning(this,"title","file not opened");
    }
    //write customer info into file
    else {
    QTextStream out(&employeeFile);

    QString firstNameEMP = ui -> lineEdit_FirstNameEMP -> text();
    out << firstNameEMP << " ";

    QString lastNameEMP = ui -> lineEdit_LastNameEMP -> text();
    out << lastNameEMP << "#";

    QString emailAdressEMP = ui -> lineEdit_EmailEMP -> text();
    out << emailAdressEMP << "#";

    QString phoneNumberEMP = ui -> lineEdit_PhoneNumberEMP -> text();
    out << phoneNumberEMP << "#";

    QString DOB_monthEMP =  ui-> lineEdit_MonthEMP -> text();
    out << DOB_monthEMP << "-";

    QString DOB_dayEMP =  ui-> lineEdit_DayEMP -> text();
    out << DOB_dayEMP << "-";

    QString DOB_YearEMP =  ui-> lineEdit_YearEMP -> text();
    out << DOB_YearEMP << "#";

    QString adressLine1EMP = ui -> lineEdit_AdressLine1EMP -> text();
    out << adressLine1EMP << ", ";

    QString adressLine2EMP = ui -> lineEdit_AdressLine2EMP -> text();
    out << adressLine2EMP << ",";

    QString cityEMP = ui -> lineEdit_CityEMP -> text();
    out << cityEMP << ",";

    QString statesEMP =  ui-> comboBox_StateEMP -> currentText();
    out << statesEMP << ",";

    QString zipCodeEMP = ui -> lineEdit_ZipCodeEMP -> text();
    out << zipCodeEMP << "#";

    QString jobEMP = ui -> lineEdit_jobEMP -> text();
    out << jobEMP << "#";

    QString salaryEMP = ui -> lineEdit_salaryEMP -> text();
    out << salaryEMP << "\n";

    employeeFile.permissions();
    employeeFile.flush();
    employeeFile.close();
    close();
}
}
