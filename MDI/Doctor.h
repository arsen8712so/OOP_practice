#ifndef DOCTOR_H
#define DOCTOR_H

#include "Person.h"
#include <QString>

class Doctor : public Person {
private:
    std::string specialization;
    int experience;

public:
    Doctor();
    // ПРИБРАНО Doctor:: перед назвою конструктора
    Doctor(int id, QString lName, QString fName, QString mName,
           QString ad, QString ph, QString spec, int exp);

    void printInfo() const override; // Обов'язково додаємо
    QString toString() const override;
};

#endif // DOCTOR_H
