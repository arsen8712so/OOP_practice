#ifndef PATIENTDIALOG_H
#define PATIENTDIALOG_H

#include <QDialog>
#include "Patient.h"

namespace Ui {
class PatientDialog;
}

class PatientDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PatientDialog(QWidget *parent = nullptr);
    ~PatientDialog();

signals: // Секція сигналів має бути всередині класу
    void patientCreated(Patient* pat);

private slots: // Секція слотів також всередині класу
    void on_createButton_clicked();

private:
    Ui::PatientDialog *ui;
}; // Крапка з комою після дужки обов'язкова!

#endif // PATIENTDIALOG_H
