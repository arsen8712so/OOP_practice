#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <random>
#include "Doctor.h"
#include "Patient.h"

void setupConsole() {
    #ifdef _WIN32
    system("chcp 65001 > nul");
    #endif
}

int main() {
    setupConsole();

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    // Завдання 3: Сортування та злиття
    std::vector<int> oddVector;
    while (oddVector.size() < 10) {
        int num = dis(gen);
        if (num % 2 != 0) oddVector.push_back(num);
    }

    std::vector<int> evenVector;
    while (evenVector.size() < 10) {
        int num = dis(gen);
        if (num % 2 == 0) evenVector.push_back(num);
    }

    std::sort(oddVector.begin(), oddVector.end());
    std::sort(evenVector.begin(), evenVector.end());

    std::vector<int> mergedVector(20);
    std::merge(oddVector.begin(), oddVector.end(), 
               evenVector.begin(), evenVector.end(), 
               mergedVector.begin());

    std::cout << "Відсортований непарний вектор: ";
    for (int n : oddVector) std::cout << n << " ";
    std::cout << "\nВідсортований парний вектор: ";
    for (int n : evenVector) std::cout << n << " ";
    std::cout << "\nЗлитий вектор: ";
    for (int n : mergedVector) std::cout << n << " ";
    std::cout << "\n" << std::endl;

    // Завдання 4: Вектор вказівників та меню
    std::vector<Person*> registry;
    int choice;
    for (int i = 0; i < 4; ++i) {
        std::cout << "Кого створити? 1 - Doctor, 2 - Patient: ";
        std::cin >> choice;
        if (choice == 1) {
            registry.push_back(new Doctor(100 + i, "DocName", "Ivan", "Iv", "City", "123", "Surgeon", 5));
        } else {
            registry.push_back(new Patient(i, "PatName", "Oleg", "Ol", "City", "456", 111, "Flu"));
        }
    }

    // Завдання 5: Копіювання та видалення елементів
    std::vector<Person*> secondRegistry = registry;

    // Видаляємо Doctor (перший підклас) з першого вектора
    registry.erase(
        std::remove_if(registry.begin(), registry.end(), [](Person* p) {
            return dynamic_cast<Doctor*>(p) != nullptr;
        }), 
        registry.end()
    );

    // Видаляємо Patient (другий підклас) з другого вектора
    secondRegistry.erase(
        std::remove_if(secondRegistry.begin(), secondRegistry.end(), [](Person* p) {
            return dynamic_cast<Patient*>(p) != nullptr;
        }), 
        secondRegistry.end()
    );

    std::cout << "\nВміст першого вектора (видалено лікарів):" << std::endl;
    for (auto p : registry) p->printInfo();

    std::cout << "\nВміст другого вектора (видалено пацієнтів):" << std::endl;
    for (auto p : secondRegistry) p->printInfo();

    // Очищення пам'яті (тільки один раз, бо вказівники копіювалися)
    // Увага: оскільки ми видаляли вказівники з векторів, 
    // оригінальні об'єкти слід видаляти обережно. 
    // Для спрощення тут не наведено повний менеджмент пам'яті.

    return 0;
}