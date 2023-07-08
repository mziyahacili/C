#include "Passport.h"

Passport :: Passport(string name, string surname, string patronymic, string citizenship, string DOB, string SEX) {
    this->name = name;
    this->surname = surname;
    this->patronymic = patronymic;
    this->citizenship = citizenship;
    this->DOB = DOB;
    this->SEX = SEX;
}


void Passport::info() const {
    cout << "Person name: " << this->name << endl
         << "Person surname: " << this->surname << endl
         << "Person DOB: " << this->DOB << endl
         << "Person patronymic: " << this->patronymic << endl
         << "Person citizenship: " << this->citizenship << endl
         << "Person sex: " << this->SEX << endl;
}
