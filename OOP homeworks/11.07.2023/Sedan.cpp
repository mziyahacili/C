#include "Sedan.h"

Sedan ::Sedan(std::string &name, std::string &model, uint16_t year, std::string &color, std::string &engine,
              std::string &gearBox, std::string &banType)  : Machine(name, model, year, color,engine,gearBox)
{
    this->banType = banType;
}


void Sedan::drive() const
{
    cout << "Sedans have good maneuverability and handling" << endl;
}

void Sedan::parking() const
{
    cout << "Sedans are usually compact in size and can be parked comfortably in standard parking spaces" << endl;
}


void Sedan ::work() const
{
    cout << "sedans are good for everyday driving" << endl;
}

