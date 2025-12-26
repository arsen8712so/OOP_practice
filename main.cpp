#include "Doctor.h"
#include "Patient.h"

int main() {
    Person* staff[2];

    staff[0] = new Doctor(101, "Ivanov", "Ivan", "Ivanovych", "Kyiv", "099", "Surgeon", 12);
    staff[1] = new Patient(1, "Shevchenko", "Andriy", "Mykolayovych", "Lviv", "050", 123, "Flu");

    for (int i = 0; i < 2; i++) {
        staff[i]->printInfo(); 
    }

    delete staff[0];
    delete staff[1];

    return 0;
}