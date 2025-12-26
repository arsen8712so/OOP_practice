#include <iostream>
#include "Patient.h"
#include "Doctor.h"

int main() {
    Doctor d1(1, "Ivanov", "Ivan", "Ivanovych", "Kyiv", "0991112233", "Surgeon", 10);
    d1.printInfo();
    return 0;
}