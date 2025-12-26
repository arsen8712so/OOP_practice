/********************************************************************************
** Form generated from reading UI file 'patientdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTDIALOG_H
#define UI_PATIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientDialog
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *lastName;
    QLabel *firstName;
    QLabel *diag;
    QLineEdit *lastNameEdit;
    QLineEdit *firstNameEdit;
    QLineEdit *diseaseEdit;
    QPushButton *createButton;

    void setupUi(QDialog *PatientDialog)
    {
        if (PatientDialog->objectName().isEmpty())
            PatientDialog->setObjectName("PatientDialog");
        PatientDialog->resize(422, 300);
        widget = new QWidget(PatientDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 30, 391, 93));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lastName = new QLabel(widget);
        lastName->setObjectName("lastName");

        gridLayout->addWidget(lastName, 0, 0, 1, 1);

        firstName = new QLabel(widget);
        firstName->setObjectName("firstName");

        gridLayout->addWidget(firstName, 0, 1, 1, 1);

        diag = new QLabel(widget);
        diag->setObjectName("diag");

        gridLayout->addWidget(diag, 0, 2, 1, 1);

        lastNameEdit = new QLineEdit(widget);
        lastNameEdit->setObjectName("lastNameEdit");

        gridLayout->addWidget(lastNameEdit, 1, 0, 1, 1);

        firstNameEdit = new QLineEdit(widget);
        firstNameEdit->setObjectName("firstNameEdit");

        gridLayout->addWidget(firstNameEdit, 1, 1, 1, 1);

        diseaseEdit = new QLineEdit(widget);
        diseaseEdit->setObjectName("diseaseEdit");

        gridLayout->addWidget(diseaseEdit, 1, 2, 1, 1);

        createButton = new QPushButton(widget);
        createButton->setObjectName("createButton");

        gridLayout->addWidget(createButton, 2, 1, 1, 1);


        retranslateUi(PatientDialog);

        QMetaObject::connectSlotsByName(PatientDialog);
    } // setupUi

    void retranslateUi(QDialog *PatientDialog)
    {
        PatientDialog->setWindowTitle(QCoreApplication::translate("PatientDialog", "Dialog", nullptr));
        lastName->setText(QCoreApplication::translate("PatientDialog", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265", nullptr));
        firstName->setText(QCoreApplication::translate("PatientDialog", "\320\206\320\274'\321\217", nullptr));
        diag->setText(QCoreApplication::translate("PatientDialog", "\320\224\321\226\320\260\320\263\320\275\320\276\320\267", nullptr));
        createButton->setText(QCoreApplication::translate("PatientDialog", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientDialog: public Ui_PatientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTDIALOG_H
