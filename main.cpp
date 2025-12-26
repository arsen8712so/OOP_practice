#include "Doctor.h"
#include "Patient.h"
#include <iostream>

void showMenu() {
    std::cout << "\n--- Меню створення об'єкта ---" << std::endl;
    std::cout << "1. Створити об'єкт Doctor" << std::endl;
    std::cout << "2. Створити об'єкт Patient" << std::endl;
    std::cout << "Виберіть тип об'єкта: ";
}

int main() {
    Person* registry[5];

    for (int i = 0; i < 5; i++) {
        int choice;
        std::cout << "\nЗаповнення елемента масиву #" << i + 1 << std::endl;
        showMenu();
        std::cin >> choice;

        if (choice == 1) {
            registry[i] = new Doctor(); 
            std::cout << "Створено об'єкт Doctor. (Тут можна додати логіку введення даних через cin)" << std::endl;
        } 
        else if (choice == 2) {
            registry[i] = new Patient();
            std::cout << "Створено об'єкт Patient. (Тут можна додати логіку введення даних через cin)" << std::endl;
        } 
        else {
            std::cout << "Неправильний вибір, створюємо Doctor за замовчуванням." << std::endl;
            registry[i] = new Doctor();
        }
    }

    std::cout << "\n--- Список усіх створених об'єктів (Поліморфний вивід) ---" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << i + 1 << ". ";
        registry[i]->printInfo(); 
    }

    for (int i = 0; i < 5; i++) {
        delete registry[i];
    }

    return 0;
}