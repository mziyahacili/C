#pragma once
#include <iostream>
#include "Student.h"
using namespace std;

class Aspirant : public Student{
private:
    string protectionTheme{};
public:
    Aspirant(string name, string surname, int age, string protectionTheme);

    string getThemeProtection() const;

    void info() const;


};

