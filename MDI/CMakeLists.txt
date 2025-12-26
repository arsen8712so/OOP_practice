cmake_minimum_required(VERSION 3.16)

project(untitled VERSION 0.1 LANGUAGES CXX)

# Включаємо автоматичну генерацію коду Qt
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Шукаємо конкретно Qt6
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Список всіх файлів проекту
set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp mainwindow.h mainwindow.ui
        Person.h Person.cpp
        Doctor.h Doctor.cpp
        Patient.h Patient.cpp
        doctordialog.h doctordialog.cpp doctordialog.ui
        patientdialog.h patientdialog.cpp patientdialog.ui
        doctorlistwindow.h doctorlistwindow.cpp doctorlistwindow.ui
        patientlistwindow.h patientlistwindow.cpp patientlistwindow.ui
)

# Створюємо виконуваний файл (стиль Qt6)
qt_add_executable(untitled
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
)

# Підключаємо бібліотеки
target_link_libraries(untitled PRIVATE Qt6::Widgets)

# Налаштування властивостей (іконки, консоль тощо)
set_target_properties(untitled PROPERTIES
    WIN32_EXECUTABLE TRUE
)

# Фіналізація (обов'язково для Qt6 з qt_add_executable)
qt_finalize_executable(untitled)
