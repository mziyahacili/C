#pragma once

#include "Person.h"



class Student : Person
{
public:
    string progress{};

    Student(string &name, string &surname, string &progress);

    void infoStudent() const;

};
