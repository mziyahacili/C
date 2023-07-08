#include "Bicycle.h"

Bicycle ::Bicycle(string make, string model, string color, string type, double avgSpeed, string spokes) : Transport(make,model,color,type, avgSpeed){
    this->spokes = spokes;
}

void Bicycle::info() const {
    Transport :: info();
    cout << "Bicycle spokes: " << this->spokes << endl;
}