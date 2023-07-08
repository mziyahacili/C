#pragma once
#include <iostream>
using namespace std;


class Transport{
protected:
    string make{};
    string model{};
    string color{};
    string type{};

public:
    double avgSpeed{};

    Transport() = default;

    Transport(string &make, string &model, string &color, string &type, double &avgSpeed);

    string getMake() const;
    string getModel() const;
    string getColor() const;
    string getType() const;
    double getAvgSpeed() const;

    void info() const;
};