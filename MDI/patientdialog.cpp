#include "patientdialog.h"
#include "ui_patientdialog.h"

PatientDialog::PatientDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PatientDialog)
{
    ui->setupUi(this);
}

PatientDialog::~PatientDialog()
{
    delete ui;
}
void PatientDialog::on_createButton_clicked()
{
    QString lName = ui->lastNameEdit->text();
    QString fName = ui->firstNameEdit->text();
    QString disease = ui->diseaseEdit->text();

    // КОНВЕРТАЦІЯ: додаємо .toStdString() для кожного QString
    // Також передаємо порожні std::string замість "" (const char*)
    Patient* newPat = new Patient(
        0,
        lName,
        fName,
        QString(""), // по батькові
        QString(""), // адреса
        QString(""), // телефон
        disease
        );

    emit patientCreated(newPat);
    accept();
}
