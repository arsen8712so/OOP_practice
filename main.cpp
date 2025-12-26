#include <iostream>
#include "Patient.h"

int main() {
    Patient object1, object2, object3;

    std::cout << "Enter data for 3 patients (ID, LName, FName, MName, Address, Phone, Card, Diag):" << std::endl;
    std::cin >> object1 >> object2 >> object3;

    std::cout << object1 << std::endl << object2 << std::endl << object3 << std::endl;

    if (object1 == object2) {
        std::cout << "Object 1 is equal to Object 2" << std::endl;
    } else {
        std::cout << "Object 1 is not equal to Object 2" << std::endl;
    }

    return 0;
}