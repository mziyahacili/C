#include "Animal.h"

Animal ::Animal(string &name, uint16_t age, string &gender)
{
    this->name = name;
    this->age = age;
    this->gender = gender;
}