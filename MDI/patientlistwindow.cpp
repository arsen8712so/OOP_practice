#include "patientlistwindow.h"
#include "ui_patientlistwindow.h"

PatientListWindow::PatientListWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PatientListWindow)
{
    ui->setupUi(this);
}

PatientListWindow::~PatientListWindow()
{
    delete ui;
}
void PatientListWindow::renderList(const QStringList &data) {
    ui->listWidget->clear();
    for (const QString &text : data) {
        QListWidgetItem *item = new QListWidgetItem(text, ui->listWidget);
        ui->listWidget->addItem(item);
    }
}
