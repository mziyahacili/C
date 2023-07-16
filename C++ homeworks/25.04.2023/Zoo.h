#pragma once
#include "Animal.h"

class Zoo
{
public:
    string name;
    int maxCol{};
    int col{};
    Animal *animal;

    Zoo(string &name, int maxCol, int col, Animal &animal);


    void info() const;
};