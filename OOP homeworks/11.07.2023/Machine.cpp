//
// Created by mziya on 30.07.2023.
//

#include "Machine.h"


Machine::Machine(string &name, string &model, uint16_t year, string &color, string &engine, string &gearBox)
{
    this->name = name;
    this->model = model;
    this->year = year;
    this->gearBox = gearBox;
    this->color = color;
    this->engine = engine;
}

