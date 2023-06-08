#include "CPU.h"


CPU :: CPU(string make, string model, double clockSpeed)
{
    this->make = make;
    this->model = model;
    this->clockSpeed = clockSpeed;
}


void CPU ::cpuInfo() const {
    cout << "CPU info" << endl;
    cout << "Maker: " << make << endl
         << "Model: " << model << endl
         << "Clock speed: " << clockSpeed << endl;
}