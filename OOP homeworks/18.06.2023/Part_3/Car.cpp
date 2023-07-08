#include "Car.h"


Car ::Car(string make, string model, string color, string type, double avgSpeed, Engine *engine)  : Transport(make,model, color,type, avgSpeed)
{
    this->engine = engine;
}

Car :: Engine ::Engine(string name, float volume) {
    this->name = name;
    this->volume = volume;
}

void Car::info() const {
    Transport :: info();
        cout
         << "Car engine(name): " << engine->name << endl
         << "Car engine(volume): " << engine->volume << endl;
}
