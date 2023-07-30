#include "SportsCar.h"


SportsCar ::SportsCar(std::string &name, std::string &model, uint16_t year, std::string &color, std::string &engine,
                      std::string &gearBox, std::string &banType) : Machine(name, model, year, color,engine,gearBox)
{
    this->banType = banType;
}

void SportsCar ::drive() const
{
    cout << "Sports cars go very fast!" << endl;
}

void SportsCar ::parking() const
{
    cout << "Parking a sports car may require more attention to body protection to avoid"
            " damage when parking in tight spaces. " << endl;
}

void SportsCar ::work() const
{
    cout << "Here is a sports car. It needs to be driven like a sports car!." << endl;
}