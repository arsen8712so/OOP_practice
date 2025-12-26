#ifndef DOCTOR_H
#define DOCTOR_H

#include "Person.h"
#include <iostream>

class Doctor : public Person {
private:
    std::string specialization;
    int experience;

public:
    Doctor(); 
    Doctor(int id, std::string lName, std::string fName, std::string mName, 
           std::string addr, std::string ph, std::string spec, int exp);
    void printInfo() const;
};

#endif