#include "OutOfRangeException.h"

OutOfRangeException::OutOfRangeException(const char *message, int code)
{
    this->message = message;
    this->code = code;
}


const char * OutOfRangeException ::what() const throw()
{
    return message;
}

