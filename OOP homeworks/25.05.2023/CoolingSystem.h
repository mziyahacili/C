#pragma once
#include <iostream>

using namespace std;

struct CoolingSystem
{
    string make;
    string model;
    CoolingSystem() = default;
    CoolingSystem(string make, string model);
    void coolingSystemInfo() const;
};



