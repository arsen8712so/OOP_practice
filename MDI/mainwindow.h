#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "Doctor.h"
#include "Patient.h"
#include "doctorlistwindow.h"
#include "patientlistwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_addDoctorBtn_clicked();
    void on_addPatientBtn_clicked();
    void on_showDoctorsBtn_clicked();
    void on_showPatientsBtn_clicked();


private:
    Ui::MainWindow *ui;
    QVector<Doctor*> doctors;
    QVector<Patient*> patients;
    DoctorListWindow *docListWin = nullptr;
    PatientListWindow *patListWin = nullptr;

};

#endif // MAINWINDOW_H
