#pragma once

#include "Machine.h"


class Bus: public Machine{
private:
    string banType{"Bus"};
public:
    Bus(string &name, string &model, uint16_t year, string &color, string &engine, string &gearBox, string &banType);

    void drive() const override;

    void parking() const override;

    void work() const override;
};