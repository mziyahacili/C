#pragma once

#include <iostream>
using namespace std;


class StackOverflowException : public exception{
public:
    StackOverflowException(const char* message, int code = 0);


    const char* what() const throw() override;

private:
    const char* message{};
    int code{};
};
