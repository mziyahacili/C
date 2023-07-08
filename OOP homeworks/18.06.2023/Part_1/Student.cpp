#include "Student.h"

Student ::Student(string name, string surname, int age) {
    this->name = name;
    this->surname = surname;
    this->age = age;
};

int Student::getAge() const {
    return this->age;
}

void Student::info() const {
    cout << "Name: " << this->name << endl
         << "Surname: " << this->surname << endl
         << "Age: " << getAge() << endl;
}