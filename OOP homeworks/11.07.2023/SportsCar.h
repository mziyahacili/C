#pragma once

#include "Machine.h"

class SportsCar: public Machine{
private:
    string banType{"Sports car"};

public:
    SportsCar(string &name, string &model, uint16_t year, /*string &banType,*/ string &color, string &engine, string &gearBox, string &banType);

    void drive() const override;

    void parking() const override;

    void work() const override;

};
