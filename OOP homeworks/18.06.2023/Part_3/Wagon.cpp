#include "Wagon.h"

Wagon ::Wagon(string make, string model, string color, string type, double avgSpeed, int horseCount) : Transport(make, model, color, type, avgSpeed)
{
    this->horseCount = horseCount;
}

void Wagon::info() const {
    Transport :: info();
     cout << "Wagon horse count: " << this->horseCount << endl;
}