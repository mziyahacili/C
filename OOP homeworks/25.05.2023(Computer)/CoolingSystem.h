#pragma once
#include <iostream>

using namespace std;

struct CoolingSystem
{
    string nameCoolingSystem;
    string modelCoolingSystem;

    CoolingSystem(string nameCoolingSystem, string modelCoolingSystem);
    void coolingSystemInfo() const;
};



