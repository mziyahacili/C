#include <iostream>
#include "Powersupply.h"
using namespace std;


struct Powersupply {
    string powerSupplyMake;
    string powerSupplyModel;
    uint16_t powerSupplyPower;
    uint16_t powerSupplyFanDiameter;
    Powersupply() = default;
    Powersupply(string powerSupplyMake, string powerSupplyModel, uint16_t powerSupplyPower, uint16_t powerSupplyFanDiameter)
    {
        this->powerSupplyMake;
        this->powerSupplyModel;
        this->powerSupplyPower = powerSupplyPower;
        this->powerSupplyFanDiameter = powerSupplyFanDiameter;
    }


    void powerSupplyInfo() const
    {
        cout << "Power supply info" << endl;
        cout << "Maker: " << powerSupplyMake << endl
             << "Model: " << powerSupplyModel << endl
             << "Power: " << powerSupplyPower << endl
             << "Fan diameter: " << powerSupplyFanDiameter << endl;
    }
};