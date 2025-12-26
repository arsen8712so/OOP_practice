#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

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
};

#endif