#ifndef PERSON_H
#define PERSON_H

#include <qcontainerfwd.h>
#include <string>
#include <QString>

class Person {
protected:
    int id;
    std::string lastName;
    std::string firstName;
    std::string middleName;
    std::string address;
    std::string phone;

public:
    Person();
    Person(int id, std::string lName, std::string fName, std::string mName, std::string addr, std::string ph);
    
    // Суто віртуальний метод (робить клас абстрактним)
    virtual void printInfo() const = 0; 
    
    virtual ~Person() {}
    virtual QString toString() const {
        // Використовуємо QString::fromStdString() для конвертації
        return QString("ID: %1 | Прізвище: %2")
            .arg(QString::number(id))
            .arg(QString::fromStdString(lastName));
    }
};

#endif
