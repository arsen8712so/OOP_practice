#include "doctorlistwindow.h"
#include "ui_doctorlistwindow.h"

DoctorListWindow::DoctorListWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DoctorListWindow)
{
    ui->setupUi(this);
}

DoctorListWindow::~DoctorListWindow()
{
    delete ui;
}
void DoctorListWindow::renderList(const QStringList &data) {
    ui->listWidget->clear(); // Очищуємо старі дані
    for (const QString &text : data) {
        // Пункт 8: Використання QListWidgetItem
        QListWidgetItem *item = new QListWidgetItem(text, ui->listWidget);
        ui->listWidget->addItem(item);
    }
}
