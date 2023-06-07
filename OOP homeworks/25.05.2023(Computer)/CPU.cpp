#include "CPU.h"


CPU :: CPU(string cpuMake, string cpuModel, double cpuClockSpeed)
{
    this->cpuMake = cpuMake;
    this->cpuModel = cpuModel;
    this->cpuClockSpeed = cpuClockSpeed;
}


void CPU ::cpuInfo() const {
    cout << "CPU info" << endl;
    cout << "Maker: " << cpuMake << endl
         << "Model: " << cpuModel << endl
         << "Clock speed: " << cpuClockSpeed << endl;
}