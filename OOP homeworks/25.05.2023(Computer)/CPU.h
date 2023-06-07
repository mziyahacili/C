#pragma once
#include <iostream>

using namespace std;

struct CPU{
    string cpuMake{};
    string cpuModel{};
    double cpuClockSpeed{};

    CPU() = default;

    CPU(string cpuMake, string cpuModel, double cpuClockSpeed);

    void cpuInfo() const;

};
