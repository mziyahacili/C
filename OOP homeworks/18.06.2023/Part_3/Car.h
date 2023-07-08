#pragma once
#include "Transport.h"



class Car : public Transport{

public:
    struct Engine{
        string name{};
        float volume{};

        Engine(string name, float volume);
    };

    Car(string make, string model, string color, string type,  double avgSpeed, Engine* engine);

    void info() const;

protected:
    Engine *engine{};
};



