#pragma once
#include "Person.h"

class Man : Person
{
public:
    uint16_t age{};
    string birthday;

    Man(string name, string surname, uint16_t age, string &birthday);

    void manInfo() const;

};