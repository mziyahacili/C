#pragma once

#include <iostream>
using namespace std;


class Machine
{
public:

    Machine(string &name, string &model, uint16_t year, string &color, string &engine, string &gearBox);


    virtual void drive() const{};

    virtual void parking() const{};

    virtual void work() const{};



private:
    string name{};
    string model{};
    uint16_t year{};
    string color{};
    string engine{};
    string gearBox{};
};