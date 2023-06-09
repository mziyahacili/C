#include "Motherboard.h"

Motherboard :: Motherboard(string make, string model, string formFactor,
                          int socketType, string chipsetMaker, int cpuCompatibility,
                          string ramType, int ramSize) : Component(make,model)
{
    this->formFactor = formFactor;
    this->chipsetMaker = chipsetMaker;
    this->ramType = ramType;
    this->socketType = socketType;
    this->ramSize = ramSize;
    this->cpuCompatibility = cpuCompatibility;
}

void Motherboard :: motherboadInfo() const {
    cout << "Motherboard info" << endl;

    cout << "Maker: " << make << endl
         << "Model: " << model << endl
         << "Form Factor: " << formFactor << endl
         << "Socket type: " << socketType << endl
         << "Chipset manufacturer: " << chipsetMaker << endl
         << "CPU compatibility: " << cpuCompatibility<< endl
         << "RAM type: " << ramType << endl
         << "RAM size: " << ramSize << endl;
}



