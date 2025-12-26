#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    // Очищення пам'яті при закритті програми
    if (currentPerson) delete currentPerson;
    delete ui;
}

// Логіка кнопки "Створити об'єкт"
void MainWindow::on_btnCreate_clicked()
{
    // 1. Перевірка чи заповнені текстові поля
    if (ui->editLastName->text().trimmed().isEmpty() ||
        ui->editFirstName->text().trimmed().isEmpty() ||
        ui->editSpec->text().trimmed().isEmpty())
    {
        QMessageBox::critical(this, "Помилка заповнення", "Будь ласка, заповніть усі обов’язкові поля!");
        return;
    }

    // 2. Видалення попереднього об'єкта, якщо він був створений раніше
    if (currentPerson) {
        delete currentPerson;
    }

    // 3. Створення нового об'єкта Doctor (параметризований конструктор)
    currentPerson = new Doctor(
        1,                                  // int ID
        ui->editLastName->text(),           // QString
        ui->editFirstName->text(),          // QString
        QString("По-батькові"),             // Перетворюємо const char в QString
        QString("Адреса"),                  // Перетворюємо const char в QString
        QString("000-00-00"),               // Перетворюємо const char в QString
        ui->editSpec->text(),               // QString
        ui->spinExp->value()                // int
        );

    // 4. Повідомлення про успіх із виводом даних через toString()
    QMessageBox::information(this, "Об'єкт створено",
                             "Дані успішно збережено!\n\n" + currentPerson->toString());
}

// Пункт меню "Створити" (просто викликає натискання кнопки)
void MainWindow::on_actionCreate_triggered()
{
    on_btnCreate_clicked();
}

// Пункт меню "Відобразити створений об'єкт"
void MainWindow::on_actionShow_triggered()
{
    if (currentPerson) {
        QMessageBox::about(this, "Поточний об'єкт", currentPerson->toString());
    } else {
        QMessageBox::warning(this, "Помилка", "Об'єкт ще не був створений!");
    }
}

// Пункт меню "Вихід"
void MainWindow::on_actionExit_triggered()
{
    close();
}
