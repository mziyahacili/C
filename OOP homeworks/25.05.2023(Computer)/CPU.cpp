#include <iostream>
#include "CPU.h"
using namespace std;

struct CPU
{
    string cpuMake;
    string cpuModel;
    double cpuClockSpeed;
    CPU() = default;
    CPU(string cpuMake, string cpuModel, double cpuClockSpeed)
    {
        this->cpuMake = cpuMake;
        this->cpuModel = cpuModel;
        this->cpuClockSpeed = cpuClockSpeed;
    }

    void cpuInfo() const{
        cout << "CPU info" << endl;
        cout << "Maker: " << cpuMake << endl
             << "Model: " << cpuModel << endl
             << "Clock speed: " << cpuClockSpeed << endl;
    }

};
