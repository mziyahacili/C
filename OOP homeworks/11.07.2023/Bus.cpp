#include "Bus.h"

Bus ::Bus(std::string &name, std::string &model, uint16_t year, std::string &color, std::string &engine,
          std::string &gearBox, std::string &banType) : Machine(name, model, year, color,engine,gearBox)
{
    this->banType = banType;
}

void Bus ::drive() const
{
    cout << "Buses run on a dedicated bus lane" << endl;
}

void Bus ::parking() const
{
    cout << "Buses are larger and require more parking spaces" << endl;
}

void Bus ::work() const
{
    cout << "Buses are needed to transport passengers" << endl;
}