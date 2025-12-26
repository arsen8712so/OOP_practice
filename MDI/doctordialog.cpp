#include "doctordialog.h"
#include "ui_doctordialog.h"
#include "Doctor.h"

DoctorDialog::DoctorDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DoctorDialog)
{
    ui->setupUi(this);
}

DoctorDialog::~DoctorDialog()
{
    delete ui;
}


void DoctorDialog::on_pushButton_clicked()
{
    // Зчитуємо дані з віджетів за їх іменами в UI
    QString lName = ui->lastNameEdit->text();
    QString fName = ui->firstNameEdit->text();
    QString spec = ui->diagEdit->text();

    // Створюємо об'єкт (ID поки 0, по батькові та телефон пусті)
    Doctor* newDoc = new Doctor(0, lName, fName, "", "", "", spec, 0);

    emit doctorCreated(newDoc); // Відправляємо сигнал
    accept(); // Закриваємо вікно
}
