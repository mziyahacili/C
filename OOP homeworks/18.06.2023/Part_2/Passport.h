#pragma once
#include <iostream>
using namespace std;

class Passport{
protected:
    string name{};
    string surname{};
    string patronymic{};
    string citizenship{};
    string DOB{};
    string SEX{};
public:

    Passport(string name, string surname, string patronymic, string citizenship, string DOB, string SEX);

    void info() const;


};
