#include <iostream>
#include "CoolingSystem.h"
using namespace std;


struct CoolingSystem{
    string nameCoolingSystem;
    string modelCoolingSystem;

    CoolingSystem(string nameCoolingSystem, string modelCoolingSystem)
    {
        this->nameCoolingSystem = nameCoolingSystem;
        this->modelCoolingSystem = modelCoolingSystem;
    }

    void coolingSystemInfo() const{
        cout << "Cooling system info" << endl;
        cout << "Maker: " << nameCoolingSystem << endl
             << "Model: " << modelCoolingSystem << endl;
    }
};