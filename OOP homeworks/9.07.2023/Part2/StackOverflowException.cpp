#include "StackOverflowException.h"


StackOverflowException ::StackOverflowException(const char *message, int code)

{
    this->message = message;
    this->code = code;
}

const char * StackOverflowException :: what() const throw()
{
    return message;
}