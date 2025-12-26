#ifndef DOCTORDIALOG_H
#define DOCTORDIALOG_H

#include "Doctor.h"
#include <QDialog>

namespace Ui {
class DoctorDialog;
}

class DoctorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DoctorDialog(QWidget *parent = nullptr);
    ~DoctorDialog();

signals:
    // Доданий сигнал для передачі об'єкта в MainWindow
    void doctorCreated(Doctor* doc);


private slots:
    void on_pushButton_clicked();

private:
    Ui::DoctorDialog *ui;
};



#endif // DOCTORDIALOG_H
