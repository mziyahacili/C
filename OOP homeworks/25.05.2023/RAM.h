#pragma once
#include <iostream>
using namespace std;

struct RAM
{
    string make;
    string model;
    string type;
    int size;
    int clockSpeed;
    RAM() = default;
    RAM(string make, string model, string type, int size, int clockSpeed);
    void ramInfo() const;

};

