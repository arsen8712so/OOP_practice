/********************************************************************************
** Form generated from reading UI file 'doctorlistwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORLISTWINDOW_H
#define UI_DOCTORLISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DoctorListWindow
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *DoctorListWindow)
    {
        if (DoctorListWindow->objectName().isEmpty())
            DoctorListWindow->setObjectName("DoctorListWindow");
        DoctorListWindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(DoctorListWindow);
        verticalLayout->setObjectName("verticalLayout");
        listWidget = new QListWidget(DoctorListWindow);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);


        retranslateUi(DoctorListWindow);

        QMetaObject::connectSlotsByName(DoctorListWindow);
    } // setupUi

    void retranslateUi(QDialog *DoctorListWindow)
    {
        DoctorListWindow->setWindowTitle(QCoreApplication::translate("DoctorListWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoctorListWindow: public Ui_DoctorListWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORLISTWINDOW_H
