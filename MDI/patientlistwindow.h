#ifndef PATIENTLISTWINDOW_H
#define PATIENTLISTWINDOW_H

#include <QDialog>
#include <QListWidgetItem> // Необхідно для роботи зі списками

namespace Ui {
class PatientListWindow;
}

class PatientListWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PatientListWindow(QWidget *parent = nullptr);
    ~PatientListWindow();

    void renderList(const QStringList &data);

private:
    Ui::PatientListWindow *ui;
};

#endif // PATIENTLISTWINDOW_H
