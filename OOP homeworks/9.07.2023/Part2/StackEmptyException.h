#pragma once
#include <iostream>
using namespace std;


class StackEmptyException : public exception
{
public:
    explicit StackEmptyException(const char* message, int code = 0);



    const char* what() const throw() override;

private:
    const char* message{};
    int code{};
};