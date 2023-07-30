#include "Truck.h"

Truck ::Truck(std::string &name, std::string &model, uint16_t year, std::string &color, std::string &engine,
              std::string &gearBox, std::string &banType) : Machine(name, model, year, color,engine,gearBox)
{
    this->banType = banType;
}

void Truck ::drive() const
{
    cout << "Trucks drive slowly due to heavy load and weight" << endl;
}

void Truck ::parking() const
{
    cout << "Trucks must be located in areas marked with a “Parking” sign with additional signs or an image of a truck directly on a blue background" << endl;
}
void Truck ::work() const
{
    cout << "Trucks are needed to transport goods" << endl;
}