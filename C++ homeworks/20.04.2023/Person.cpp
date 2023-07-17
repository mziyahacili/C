
#include "Person.h"


Person ::Person(string &name, string &surname)
{
    this->name = name;
    this->surname = surname;
}

void Person::info() const
{
    cout << "Name: " << this->name << endl
         << "Surname: " << this->surname << endl;
}