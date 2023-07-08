#include "Transport.h"

Transport ::Transport(string &make, string &model, string &color, string &type, double &avgSpeed) {
    this->make = make;
    this->model = model;
    this->color = color;
    this->type = type;
    this->avgSpeed = avgSpeed;
}


string Transport::getMake() const {return this->make;}

string Transport::getModel() const {return this->model;}

string Transport::getColor() const {return this->color;}

string Transport::getType() const {return this->type;}

double Transport::getAvgSpeed() const {return this->avgSpeed;}

void Transport::info() const {
    cout << "Make: " << getMake() << endl
         << "Model: " << getModel() << endl
         << "Color: " << getColor() << endl
         << "Type: " << getType() << endl
         << "Average speed: " << getAvgSpeed() << endl;
}
