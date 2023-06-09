#pragma once
#include <iostream>
#include "Component.h"

using namespace std;

struct Motherboard : public Component
{
    int socketType;
    int ramSize;
    int cpuCompatibility;
    string formFactor;
    string chipsetMaker;
    string ramType;


    Motherboard() = default;
    Motherboard(string make, string model,
                string formFactor, int socketType,string chipsetMaker, int cpuCompatibility,string ramType, int ramSize);


    void motherboadInfo() const;
};


