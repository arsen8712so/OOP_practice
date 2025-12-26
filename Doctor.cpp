#include "Doctor.h"

Doctor::Doctor() : Person(), experience(0) {}

Doctor::Doctor(int id, std::string lName, std::string fName, std::string mName, 
               std::string addr, std::string ph, std::string spec, int exp)
    : Person(id, lName, fName, mName, addr, ph), specialization(spec), experience(exp) {}

void Doctor::printInfo() const {
    std::cout << "Doctor: " << lastName << " " << firstName << " [" << specialization << "]" << std::endl;
}