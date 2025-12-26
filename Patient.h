#ifndef PATIENT_H
#define PATIENT_H

#include <string>

class Patient {
private:
    int id;
    std::string lastName;
    std::string firstName;
    std::string middleName;
    std::string address;
    std::string phone;
    int medicalCardNumber;
    std::string diagnosis;

public:
    Patient(); 
Patient(int id, std::string lName, std::string fName, std::string mName, 
        std::string addr, std::string ph, int medCard, std::string diag); // Параметризований
Patient(const Patient &other); 
~Patient();
};

#endif