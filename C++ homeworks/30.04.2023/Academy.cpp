#include "Academy.h"

Academy ::Academy(string &name, Student &students)
{
    this->name = name;
    this->students = &students;
}


void Academy::info() const
{
    cout << "Academy name: " << this->name << endl
         << "Student name: " << students->name << endl
         << "Student surname: " << students->surname << endl
         << "Student faculty: " << students->faculty << endl
         << "Student age: " << students->age << endl
         << "Student course: " << students->course << endl;
}