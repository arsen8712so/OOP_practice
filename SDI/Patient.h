#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"
#include <QString>

class Patient : public Person {
private:
    int medicalCardNumber;
    std::string diagnosis;

public:
    Patient();
    Patient(int id, std::string lName, std::string fName, std::string mName, 
            std::string addr, std::string ph, int medCard, std::string diag);
    ~Patient();

    void printInfo() const override;
    bool operator==(const Patient& other) const;
};

#endif
