#include "RAM.h"


RAM ::RAM(string make, string model, string type, int size, int clockSpeed) {
    this->make = make;
    this->model = model;
    this->type = type;
    this->size = size;
    this->clockSpeed = clockSpeed;
}

void RAM ::ramInfo() const {
    cout << endl << "RAM info" << endl;

    cout << "RAM make: " << make << endl
         << "RAM model: " << model << endl
         << "RAM type: " << type << endl
         << "RAM size in GB: " << size << endl
         << "RAM clock speed: " << clockSpeed << endl;
}
