#pragma once
#include "Student.h"


class Academy
{
public:
    string name;
    Student *students;

    Academy(string &name, Student &students);

    void info() const;
};

