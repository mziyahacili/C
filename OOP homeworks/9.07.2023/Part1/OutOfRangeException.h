#pragma once
#include <iostream>
using namespace std;


class OutOfRangeException : public exception
{
public:
    explicit OutOfRangeException(const char* message, int code = 0);


    const char* what() const throw() override;


private:
    const char* message{};
    int code{};
};
