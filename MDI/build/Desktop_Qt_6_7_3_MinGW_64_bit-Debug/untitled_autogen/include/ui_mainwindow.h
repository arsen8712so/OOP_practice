/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *addPatientBtn;
    QPushButton *showPatientsBtn;
    QPushButton *addDoctorBtn;
    QPushButton *showDoctorsBtn;
    QPushButton *btnExit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(602, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        addPatientBtn = new QPushButton(centralwidget);
        addPatientBtn->setObjectName("addPatientBtn");

        verticalLayout->addWidget(addPatientBtn);

        showPatientsBtn = new QPushButton(centralwidget);
        showPatientsBtn->setObjectName("showPatientsBtn");

        verticalLayout->addWidget(showPatientsBtn);

        addDoctorBtn = new QPushButton(centralwidget);
        addDoctorBtn->setObjectName("addDoctorBtn");

        verticalLayout->addWidget(addDoctorBtn);

        showDoctorsBtn = new QPushButton(centralwidget);
        showDoctorsBtn->setObjectName("showDoctorsBtn");

        verticalLayout->addWidget(showDoctorsBtn);

        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName("btnExit");

        verticalLayout->addWidget(btnExit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 602, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addPatientBtn->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\277\320\260\321\206\321\226\321\224\320\275\321\202\320\260", nullptr));
        showPatientsBtn->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\320\270 \321\201\320\277\320\270\321\201\320\276\320\272 \320\277\320\260\321\206\321\226\321\224\320\275\321\202\321\226\320\262", nullptr));
        addDoctorBtn->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\273\321\226\320\272\320\260\321\200\321\217", nullptr));
        showDoctorsBtn->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\320\270 \321\201\320\277\320\270\321\201\320\276\320\272 \320\273\321\226\320\272\320\260\321\200\321\226\320\262", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
