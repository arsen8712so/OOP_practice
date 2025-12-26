#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "Person.h"
#include "Doctor.h"
#include "Patient.h"

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
    // Слот для кнопки на формі
    void on_btnCreate_clicked();

    // Слоти для пунктів головного меню
    void on_actionCreate_triggered();
    void on_actionShow_triggered();
    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    // Вказівник на об'єкт базового класу для збереження створеного лікаря/пацієнта
    Person *currentPerson = nullptr;
};

#endif // MAINWINDOW_H
