#include "RAM.h"




RAM ::RAM(string ramMake, string ramModel, string ramType, int ramSize, int ramClockSpeed) {
    this->ramMake = ramMake;
    this->ramModel = ramModel;
    this->ramSize = ramSize;
    this->ramClockSpeed = ramClockSpeed;
}

void RAM ::ramInfo() const {
    cout << endl << "RAM info" << endl;

    cout << "RAM make: " << ramMake << endl
         << "RAM model: " << ramModel << endl
         << "RAM type: " << ramType << endl
         << "RAM size in GB: " << ramSize << endl
         << "RAM clock speed: " << ramClockSpeed << endl;
}
