#include "Doctor.h"
#include "Patient.h"

int main() {
    Doctor d1(1, "Petrov", "Petro", "Petrovych", "Kyiv", "099", "Therapist", 5);
    Doctor d2(2, "Sidorov", "Ivan", "Sydorovych", "Lviv", "067", "OCL", 15);
    
    Patient p1(1, "Shevchenko", "Taras", "Hryhorovych", "Kaniv", "050", 101, "Cold");
    Patient p2(2, "Franko", "Ivan", "Yakovych", "Lviv", "063", 102, "Healthy");

    d1.printInfo();
    d2.printInfo();
    p1.printInfo();
    p2.printInfo();

    return 0;
}