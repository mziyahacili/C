#include "Student.h"

Student ::Student(string &name, string &surname, string &faculty, uint16_t age, int16_t course)
{
    this->name = name;
    this->surname = surname;
    this->faculty = faculty;
    this->age = age;
    this->course = course;
}