/********************************************************************************
** Form generated from reading UI file 'patientlistwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTLISTWINDOW_H
#define UI_PATIENTLISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PatientListWindow
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *PatientListWindow)
    {
        if (PatientListWindow->objectName().isEmpty())
            PatientListWindow->setObjectName("PatientListWindow");
        PatientListWindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(PatientListWindow);
        verticalLayout->setObjectName("verticalLayout");
        listWidget = new QListWidget(PatientListWindow);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);


        retranslateUi(PatientListWindow);

        QMetaObject::connectSlotsByName(PatientListWindow);
    } // setupUi

    void retranslateUi(QDialog *PatientListWindow)
    {
        PatientListWindow->setWindowTitle(QCoreApplication::translate("PatientListWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientListWindow: public Ui_PatientListWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTLISTWINDOW_H
