#pragma once
#include <iostream>

using namespace std;

struct Powersupply
{
    string powerSupplyMake;
    string powerSupplyModel;
    uint16_t powerSupplyPower;
    uint16_t powerSupplyFanDiameter;
    Powersupply() = default;
    Powersupply(string powerSupplyMake, string powerSupplyModel, uint16_t powerSupplyPower, uint16_t powerSupplyFanDiameter);
    void powerSupplyInfo() const;
};



