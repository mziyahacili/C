#pragma once
#include <iostream>

using namespace std;

struct Motherboard
{
    int socketTypeMotherboard;
    int ramSizeMotherboard;
    int cpuCompatibilityMotherboard;
    string makeMotherboard;
    string modelMotherboard;
    string formFactorMotherboard;
    string chipsetMakerMotherboard;
    string ramTypeMotherboard;
    Motherboard() = default;
    Motherboard(string makeMotherboard, string modelMotherboard,
                string formFactorMotherboard, int socketTypeMotherboard,string chipsetMakerMotherboard,
                int cpuCompatibilityMotherboard,string ramTypeMotherboard, int ramSizeMotherboard);
    void motherboadInfo() const;
};


