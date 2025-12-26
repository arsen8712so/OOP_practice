/********************************************************************************
** Form generated from reading UI file 'doctordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORDIALOG_H
#define UI_DOCTORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoctorDialog
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *firstNameEdit;
    QLineEdit *diagEdit;
    QLabel *spec;
    QLineEdit *lastNameEdit;
    QPushButton *pushButton;
    QLabel *lastName;
    QLabel *firstName;

    void setupUi(QDialog *DoctorDialog)
    {
        if (DoctorDialog->objectName().isEmpty())
            DoctorDialog->setObjectName("DoctorDialog");
        DoctorDialog->resize(411, 300);
        layoutWidget = new QWidget(DoctorDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 391, 93));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        firstNameEdit = new QLineEdit(layoutWidget);
        firstNameEdit->setObjectName("firstNameEdit");

        gridLayout->addWidget(firstNameEdit, 1, 1, 1, 1);

        diagEdit = new QLineEdit(layoutWidget);
        diagEdit->setObjectName("diagEdit");

        gridLayout->addWidget(diagEdit, 1, 2, 1, 1);

        spec = new QLabel(layoutWidget);
        spec->setObjectName("spec");

        gridLayout->addWidget(spec, 0, 2, 1, 1);

        lastNameEdit = new QLineEdit(layoutWidget);
        lastNameEdit->setObjectName("lastNameEdit");

        gridLayout->addWidget(lastNameEdit, 1, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        lastName = new QLabel(layoutWidget);
        lastName->setObjectName("lastName");

        gridLayout->addWidget(lastName, 0, 0, 1, 1);

        firstName = new QLabel(layoutWidget);
        firstName->setObjectName("firstName");

        gridLayout->addWidget(firstName, 0, 1, 1, 1);


        retranslateUi(DoctorDialog);

        QMetaObject::connectSlotsByName(DoctorDialog);
    } // setupUi

    void retranslateUi(QDialog *DoctorDialog)
    {
        DoctorDialog->setWindowTitle(QCoreApplication::translate("DoctorDialog", "Dialog", nullptr));
        spec->setText(QCoreApplication::translate("DoctorDialog", "\320\241\320\277\320\265\321\206\321\226\320\260\320\273\321\226\320\267\320\260\321\206\321\226\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("DoctorDialog", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
        lastName->setText(QCoreApplication::translate("DoctorDialog", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265", nullptr));
        firstName->setText(QCoreApplication::translate("DoctorDialog", "\320\206\320\274'\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoctorDialog: public Ui_DoctorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORDIALOG_H
