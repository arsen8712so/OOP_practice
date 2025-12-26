#include "Patient.h"
#include <iostream>

Patient::Patient() : Person() {}

// Реалізація конструктора з конвертацією QString у std::string
Patient::Patient(int id, QString lName, QString fName, QString mName,
                 QString address, QString phone, QString dis)
    : Person(id,
             lName.toStdString(),
             fName.toStdString(),
             mName.toStdString(),
             address.toStdString(),
             phone.toStdString()),
    disease(dis.toStdString())
{
}

void Patient::printInfo() const {
    std::cout << "[PATIENT] " << lastName << " Disease: " << disease << std::endl;
}

QString Patient::toString() const {
    // Використовуємо базовий метод і додаємо діагноз
    return Person::toString() + " | Хвороба: " + QString::fromStdString(disease);
}
