#pragma once
#include <iostream>

using namespace std;

struct HardDrive
{
    string make;
    string model;
    string formFactor;
    uint16_t capacity;
    HardDrive() = default;
    HardDrive(string make, string model, string formFactor, uint16_t capacity);
    void hardDriveInfo() const;
};