#include "Patient.h"
#include <iostream>

Patient::Patient() : id(0), medicalCardNumber(0), diagnosis("None") {}

Patient::Patient(int id, std::string lName, std::string fName, std::string mName, 
                 std::string addr, std::string ph, int medCard, std::string diag) 
    : id(id), lastName(lName), firstName(fName), middleName(mName), 
      address(addr), phone(ph), medicalCardNumber(medCard), diagnosis(diag) {}

Patient::Patient(const Patient &other) {
    id = other.id;
    lastName = other.lastName;
    firstName = other.firstName;
    middleName = other.middleName;
    address = other.address;
    phone = other.phone;
    medicalCardNumber = other.medicalCardNumber;
    diagnosis = other.diagnosis;
}

Patient::~Patient() {
    
}