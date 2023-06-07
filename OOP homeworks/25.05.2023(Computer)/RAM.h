#pragma once
#include <iostream>

using namespace std;

struct RAM
{
    string ramMake;
    string ramModel;
    string ramType;
    int ramSize;
    int ramClockSpeed;
    RAM() = default;
    RAM(string ramMake, string ramModel, string ramType, int ramSize, int ramClockSpeed);
    void ramInfo() const;

};

