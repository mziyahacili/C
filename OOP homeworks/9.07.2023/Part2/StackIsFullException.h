#pragma once

#include <iostream>
using namespace std;



class StackIsFullException : public exception
{
public:
    explicit StackIsFullException(const char* message, int code = 0);

    const char* what() const throw() override;


private:
    const char* message{};
    int code{};
};
