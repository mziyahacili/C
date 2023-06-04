#include "Motherboard.h"
#include <iostream>
using namespace std;

struct Motherboard{
    int socketTypeMotherboard;
    int ramSizeMotherboard;
    int cpuCompatibilityMotherboard;
    string makeMotherboard;
    string modelMotherboard;
    string formFactorMotherboard;
    string chipsetMakerMotherboard;
    string ramTypeMotherboard;
    Motherboard() = default;
    Motherboard(string makeMotherboard, string modelMotherboard, string formFactorMotherboard, int socketTypeMotherboard, string chipsetMakerMotherboard, int cpuCompatibilityMotherboard,string ramTypeMotherboard, int ramSizeMotherboard)
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

    void motherboadInfo() const
    {
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

};