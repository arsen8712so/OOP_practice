#include <iostream>
#include <list>
#include <map>
#include <algorithm>
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

    std::list<int> list1;
    while (list1.size() < 10) {
        int num = dis(gen);
        if (num % 2 != 0) list1.push_back(num);
    }

    std::list<int> list2;
    auto it2 = list2.begin();
    while (list2.size() < 10) {
        int num = dis(gen);
        if (num % 2 == 0) {
            list2.insert(list2.end(), num);
        }
    }

    list1.sort();
    list2.sort();

    std::list<int> mergedList;
    std::merge(list1.begin(), list1.end(), list2.begin(), list2.end(), std::back_inserter(mergedList));

    std::cout << "Список 1 (непарні відсортовані): ";
    for (int n : list1) std::cout << n << " ";
    std::cout << "\nСписок 2 (парні відсортовані): ";
    for (int n : list2) std::cout << n << " ";
    std::cout << "\nЗлитий список: ";
    for (int n : mergedList) std::cout << n << " ";
    std::cout << "\n\n";

    

    std::map<int, Person*> personMap;
    int choice = -1;

    while (choice != 0) {
        std::cout << "--- Меню Map ---" << std::endl;
        std::cout << "1. Додати Doctor" << std::endl;
        std::cout << "2. Додати Patient" << std::endl;
        std::cout << "3. Пошук об'єкта за ID" << std::endl;
        std::cout << "0. Вихід" << std::endl;
        std::cout << "Ваш вибір: ";
        std::cin >> choice;

        if (choice == 1 || choice == 2) {
            int id;
            std::cout << "Введіть ID: ";
            std::cin >> id;
            if (choice == 1) {
                personMap[id] = new Doctor(id, "Doc", "Ivan", "Iv", "Kyiv", "099", "Surgeon", 10);
            } else {
                personMap[id] = new Patient(id, "Pat", "Oleg", "Ol", "Lviv", "067", 101, "Flu");
            }
            std::cout << "Об'єкт додано!\n";
        } 
        else if (choice == 3) {
            int searchId;
            std::cout << "Введіть ID для пошуку: ";
            std::cin >> searchId;

            auto it = personMap.find(searchId);
            if (it != personMap.end()) {
                std::cout << "Знайдено об'єкт (Ключ: " << it->first << "):" << std::endl;
                it->second->printInfo();
            } else {
                std::cout << "Об'єкт з таким ID не знайдено." << std::endl;
            }
        }
    }

    

    for (auto const& [id, person] : personMap) {
        delete person;
    }

    return 0;
}