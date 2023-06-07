#include "Motherboard.h"


Motherboard :: Motherboard(string makeMotherboard, string modelMotherboard, string formFactorMotherboard,
                          int socketTypeMotherboard, string chipsetMakerMotherboard, int cpuCompatibilityMotherboard,
                          string ramTypeMotherboard, int ramSizeMotherboard)
{
    this->makeMotherboard = makeMotherboard;
    this->modelMotherboard = modelMotherboard;
    this->formFactorMotherboard = formFactorMotherboard;
    this->chipsetMakerMotherboard = chipsetMakerMotherboard;
    this->ramTypeMotherboard = ramTypeMotherboard;
    this->socketTypeMotherboard = socketTypeMotherboard;
    this->ramSizeMotherboard = ramSizeMotherboard;
    this->cpuCompatibilityMotherboard = cpuCompatibilityMotherboard;
}

void Motherboard :: motherboadInfo() const {
    cout << "Motherboard info" << endl;

    cout << "Maker: " << makeMotherboard << endl
         << "Model: " << modelMotherboard << endl
         << "Form Factor: " << formFactorMotherboard << endl
         << "Socket type: " << socketTypeMotherboard << endl
         << "Chipset manufacturer: " << chipsetMakerMotherboard << endl
         << "CPU compatibility: " << cpuCompatibilityMotherboard<< endl
         << "RAM type: " << ramTypeMotherboard << endl
         << "RAM size: " << ramSizeMotherboard << endl;
}

