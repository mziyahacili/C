#pragma once
#include <iostream>

using namespace std;

struct CPU{
    string make{};
    string model{};
    double clockSpeed{};

    CPU() = default;

    CPU(string make, string model, double clockSpeed);

    void cpuInfo() const;

};
