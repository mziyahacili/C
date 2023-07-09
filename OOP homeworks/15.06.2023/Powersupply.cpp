#include "Powersupply.h"


Powersupply :: Powersupply(string make, string model, uint16_t power,uint16_t fanDiameter) : Component(make,model)
{
    this->power = power;
    this->fanDiameter = fanDiameter;
}

Powersupply ::Powersupply(const Powersupply &other)  : Component(other) {
    this->fanDiameter = other.fanDiameter;
    this->power = other.power;
}

void Powersupply ::powerSupplyInfo() const {
    cout << "Power supply info" << endl;
    cout << "Maker: " << make << endl
         << "Model: " << model << endl
         << "Power: " << power << endl
         << "Fan diameter: " << fanDiameter << endl;
}
