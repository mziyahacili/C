#pragma once
#include <iostream>


using namespace std;

struct Motherboard
{
    int socketType;
    int ramSize;
    int cpuCompatibility;
    string make;
    string model;
    string formFactor;
    string chipsetMaker;
    string ramType;


    Motherboard() = default;
    Motherboard(string make, string model,
                string formFactor, int socketType,string chipsetMaker, int cpuCompatibility,string ramType, int ramSize);


    void motherboadInfo() const;
};


