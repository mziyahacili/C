//
// Created by mziya on 17.07.2023.
//

#include "Man.h"

Man::Man(string name, string surname, uint16_t age, string &birthday) : Person(name,surname)
{
    this->age = age;
    this->birthday = birthday;
}

void Man::manInfo() const
{
    Person :: info();
    cout << "Age: " << this->age << endl
         << "Birthday: " << this->birthday << endl;
}
