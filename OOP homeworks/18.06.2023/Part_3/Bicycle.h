#pragma once
#include "Transport.h"

class Bicycle : public Transport{
protected:
    string spokes{};

public:
    Bicycle(string make, string model, string color, string type, double avgSpeed, string spokes);

    void info() const;

};