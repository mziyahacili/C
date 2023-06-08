#pragma once
#include <iostream>

using namespace std;

struct Powersupply
{
    string make;
    string model;
    uint16_t power;
    uint16_t fanDiameter;
    Powersupply() = default;
    Powersupply(string make, string model, uint16_t power, uint16_t fanDiameter);
    void powerSupplyInfo() const;
};



