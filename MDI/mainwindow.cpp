#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "doctordialog.h"
#include "patientdialog.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Створюємо вікна спискys один раз при старті
    docListWin = new DoctorListWindow(this);
    patListWin = new PatientListWindow(this);
}

MainWindow::~MainWindow()
{
    qDeleteAll(doctors);
    qDeleteAll(patients);
    delete ui;
}

void MainWindow::on_addDoctorBtn_clicked()
{
    DoctorDialog *dlg = new DoctorDialog(this);

    connect(dlg, &DoctorDialog::doctorCreated, this, [this](Doctor* doc) {
        doctors.append(doc);
        qDebug() << "Добавлен доктор:" << doc->toString();
    });

    dlg->exec();
}

void MainWindow::on_addPatientBtn_clicked()
{
    PatientDialog *dlg = new PatientDialog(this);
    connect(dlg, &PatientDialog::patientCreated, this, [this](Patient* pat) {
        patients.append(pat);
    });
    dlg->exec();
}
void MainWindow::on_showDoctorsBtn_clicked() {
    if (docListWin->isVisible()) {
        docListWin->hide(); // Якщо відкрите — ховаємо
    } else {
        // Готуємо дані для відображення
        QStringList data;
        for (Doctor* d : doctors) {
            data << d->toString();
        }
        docListWin->renderList(data);
        docListWin->show(); // Пункт 5: Відображаємо не модально
    }
}
void MainWindow::on_showPatientsBtn_clicked()
{
    // Перевірка на існування вікна
    if (!patListWin) return;

    if (patListWin->isVisible()) {
        patListWin->hide();
    } else {
        QStringList data;
        // Формуємо список рядків для відображення
        for (Patient* p : patients) {
            data << p->toString();
        }

        // Оновлюємо та показуємо вікно
        patListWin->renderList(data);
        patListWin->show();
    }
}
