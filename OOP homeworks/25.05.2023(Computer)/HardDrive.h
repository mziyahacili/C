#pragma once
#include <iostream>

using namespace std;

struct HardDrive
{
    string makeHardDrive;
    string modelHardDrive;
    string formFactorHardDrive;
    uint16_t capacityHardDrive;
    HardDrive(string makeHardDrive, string modelHardDrive, string formFactorHardDrive, uint16_t capacityHardDrive);
    void hardDriveInfo() const;
};