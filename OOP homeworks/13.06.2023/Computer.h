#pragma once
#include <iostream>
#include "RAM.h"
#include "Motherboard.h"
#include "Powersupply.h"
#include "CPU.h"
#include "CoolingSystem.h"
#include "HardDrive.h"
#include "VideoCard.h"


using namespace std;

class Computer : Component
{
public:
    RAM ram;
    Motherboard motherboard;
    Powersupply powersupply;
    CPU cpu;
    CoolingSystem coolingSystem;
    HardDrive hardDrive;
    VideoCard videoCard;

    Computer() = default;
    Computer(RAM ram, Motherboard motherboard, CPU cpu, HardDrive hardDrive, VideoCard videoCard, Powersupply powersupply, CoolingSystem coolingSystem);
    void computerInfo() const;
};