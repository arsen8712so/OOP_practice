#include "Doctor.h"

Doctor::Doctor() : id(0), experience(0) {}

Doctor::Doctor(int id, std::string lName, std::string fName, std::string mName, 
               std::string addr, std::string ph, std::string spec, int exp)
    : id(id), lastName(lName), firstName(fName), middleName(mName), 
      address(addr), phone(ph), specialization(spec), experience(exp) {}

void Doctor::printInfo() const {
    std::cout << "Doctor: " << lastName << " " << firstName << " [" << specialization << "], Exp: " << experience << " years" << std::endl;
}