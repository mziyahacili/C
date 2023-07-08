#pragma once
#include "Transport.h"


class Wagon : public Transport{
protected:
    int horseCount{};
public:
    Wagon(string make, string model, string color, string type, double avgSpeed, int horseCount);
    void info() const;
};


