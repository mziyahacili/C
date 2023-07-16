#pragma once

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    string surname;
    string faculty;
    uint16_t age{};
    uint16_t course{};

    Student(string &name, string &surname, string &faculty, uint16_t age, int16_t course);
};