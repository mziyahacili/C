#pragma once
#include <iostream>
using namespace std;

class Student{
protected:
    int age{};
public:
    string name{};
    string surname{};

    Student(string name, string surname, int age);

    int getAge() const;

    void info() const;

};