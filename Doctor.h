#ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>
#include <string>

class Doctor {
private:
    int id;
    std::string lastName;
    std::string firstName;
    std::string middleName;
    std::string address;
    std::string phone;
    std::string specialization;
    int experience;

public:
    Doctor();
    Doctor(int id, std::string lName, std::string fName, std::string mName, 
           std::string addr, std::string ph, std::string spec, int exp);
    
    void printInfo() const;
};

#endif