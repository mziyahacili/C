#include <iostream>
#include "HardDrive.h"
using namespace std;

struct HardDrive{
    string makeHardDrive;
    string modelHardDrive;
    string formFactorHardDrive;
    uint16_t capacityHardDrive;

    HardDrive(string makeHardDrive, string modelHardDrive, string formFactorHardDrive, uint16_t capacityHardDrive)
    {
        this->makeHardDrive = makeHardDrive;
        this->modelHardDrive = modelHardDrive;
        this->formFactorHardDrive = formFactorHardDrive;
        this->capacityHardDrive = capacityHardDrive;
    }

    void hardDriveInfo() const{
        cout << "Hard drive info" << endl;
        cout << "Hard drive maker: " << makeHardDrive << endl
             << "Hard drive model: " << modelHardDrive << endl
             << "Hard drive form-factor: " << formFactorHardDrive << endl
             << "Hard drive capacity: " << capacityHardDrive << endl;
    }
};