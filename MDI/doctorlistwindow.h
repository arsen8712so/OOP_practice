#ifndef DOCTORLISTWINDOW_H
#define DOCTORLISTWINDOW_H

#include "ui_doctorlistwindow.h"
#include <QDialog>
#include <QListWidgetItem>

namespace Ui {
class DoctorListWindow;
}

class DoctorListWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DoctorListWindow(QWidget *parent = nullptr);
    ~DoctorListWindow();
    void renderList(const QStringList &data);

public:
    // Додаємо метод для заповнення списку
    void refreshList(const QStringList &items) {
        ui->listWidget->clear();
        for (const QString &text : items) {
            // Створюємо елемент списку [cite: 8]
            new QListWidgetItem(text, ui->listWidget);
        }
    }

private:
    Ui::DoctorListWindow *ui;
};



#endif // DOCTORLISTWINDOW_H
