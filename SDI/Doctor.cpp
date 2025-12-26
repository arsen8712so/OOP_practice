#include "Doctor.h"
#include <iostream>
#include <ostream>

using namespace std;

Doctor::Doctor() : Person(), experience(0) {}

Doctor::Doctor(int id, QString lName, QString fName, QString mName,
               QString ad, QString ph, QString spec, int exp)
    : Person(id, lName.toStdString(), fName.toStdString(), mName.toStdString(),
             ad.toStdString(), ph.toStdString()),
    specialization(spec.toStdString()), experience(exp)
{}

void Doctor::printInfo() const {
    std::cout << "[DOCTOR] ID: " << id << " | " << lastName << std::endl;
}

QString Doctor::toString() const {
    return Person::toString() + QString(" | Спец: %1").arg(QString::fromStdString(specialization));
}
