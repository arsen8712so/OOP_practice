#include "Person.h"

Person::Person() : id(0) {}

Person::Person(int id, std::string lName, std::string fName, std::string mName, std::string addr, std::string ph)
    : id(id), lastName(lName), firstName(fName), middleName(mName), address(addr), phone(ph) {}