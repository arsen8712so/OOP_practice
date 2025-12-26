#include "Patient.h"

Patient::Patient() : Person(), medicalCardNumber(0) {}

Patient::Patient(int id, std::string lName, std::string fName, std::string mName, 
                 std::string addr, std::string ph, int medCard, std::string diag)
    : Person(id, lName, fName, mName, addr, ph), medicalCardNumber(medCard), diagnosis(diag) {}

Patient::~Patient() {}

void Patient::printInfo() const {
    std::cout << "[PATIENT] ID: " << id << " | " << lastName << " " << firstName 
              << " | Card: " << medicalCardNumber << " | Diag: " << diagnosis << std::endl;
}

bool Patient::operator==(const Patient& other) const {
    return id == other.id && 
           lastName == other.lastName && 
           medicalCardNumber == other.medicalCardNumber &&
           diagnosis == other.diagnosis;
}