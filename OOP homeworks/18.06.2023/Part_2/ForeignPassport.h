#pragma once
#include <iostream>
#include "Passport.h"
using namespace std;


class ForeignPassport : public Passport{
protected:
    int numberFPassport{};
    int countEntries{};
    string visaType{};
    int totalStay{};

public:
    ForeignPassport(string name, string surname, string patronymic, string citizenship, string DOB, string SEX,
                    int numberFPassport, int countEntries, string visaType, int totalStay);

    void info() const;

};