
#include "CoolingSystem.h"




CoolingSystem :: CoolingSystem(string nameCoolingSystem, string modelCoolingSystem) {
    this->nameCoolingSystem = nameCoolingSystem;
    this->modelCoolingSystem = modelCoolingSystem;
}

void CoolingSystem ::coolingSystemInfo() const {
    cout << "Cooling system info" << endl;
    cout << "Maker: " << nameCoolingSystem << endl
         << "Model: " << modelCoolingSystem << endl;
}


