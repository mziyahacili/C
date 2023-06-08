
#include "CoolingSystem.h"




CoolingSystem :: CoolingSystem(string make, string model) {
    this->make = make;
    this->model = model;
}

void CoolingSystem ::coolingSystemInfo() const {
    cout << "Cooling system info" << endl;
    cout << "Maker: " << make << endl
         << "Model: " << model << endl;
}


