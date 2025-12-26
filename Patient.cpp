#include "Patient.h"

Patient::Patient() : id(0), medicalCardNumber(0) {}

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

Patient::~Patient() {}

std::istream& operator>>(std::istream& in, Patient& p) {
    in >> p.id >> p.lastName >> p.firstName >> p.middleName 
       >> p.address >> p.phone >> p.medicalCardNumber >> p.diagnosis;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Patient& p) {
    out << "ID: " << p.id << ", Name: " << p.lastName << " " << p.firstName 
        << ", Diagnosis: " << p.diagnosis;
    return out;
}

bool Patient::operator==(const Patient& other) const {
    return id == other.id &&
           lastName == other.lastName &&
           firstName == other.firstName &&
           middleName == other.middleName &&
           address == other.address &&
           phone == other.phone &&
           medicalCardNumber == other.medicalCardNumber &&
           diagnosis == other.diagnosis;
}