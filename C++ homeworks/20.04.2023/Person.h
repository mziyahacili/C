#pragma once
#include <iostream>

using namespace std;

struct Person
{
    string name;
    string surname;

    Person(string &name, string &surname);

    void info() const;
};