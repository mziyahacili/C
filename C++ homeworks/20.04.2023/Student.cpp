#include "Student.h"



Student::Student(string &name, string &surname, string &progress) : Person(name, surname) {
    this->progress = progress;
}

void Student::infoStudent() const
{
    Person :: info();
    cout << "Student progress: " << this->progress << endl;
}