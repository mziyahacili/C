#include "CoolingSystem.h"




CoolingSystem :: CoolingSystem(string make, string model, string type, uint16_t coolerCount) : Component(make,model)
{
    this->type = type;
    this->coolerCount = coolerCount;
}

void CoolingSystem ::coolingSystemInfo() const {
    cout << "Cooling system info" << endl;
    cout << "Maker: " << make << endl
         << "Model: " << model << endl
         << "Cooler type: " << type << endl
         << "Cooler count: " << coolerCount << endl;
}

CoolingSystem::CoolingSystem(const CoolingSystem &other)  : Component(other) {
    this->type = other.type;
    this->coolerCount = other.coolerCount;
}


