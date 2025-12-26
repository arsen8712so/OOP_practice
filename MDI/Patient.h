#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"
#include <QString>
#include <string>

class Patient : public Person
{
private:
    std::string disease;

public:
    Patient();
    // Конструктор, який приймає QString (це те, що шукає компілятор)
    Patient(int id, QString lName, QString fName, QString mName,
            QString address, QString phone, QString disease);

    void printInfo() const override;
    QString toString() const override;
};

#endif // PATIENT_H
