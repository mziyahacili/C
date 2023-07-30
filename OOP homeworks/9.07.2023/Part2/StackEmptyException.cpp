#include "StackEmptyException.h"

StackEmptyException ::StackEmptyException(const char *message, int code)
{
    this->message = message;
    this->code = code;
}

const char * StackEmptyException ::what() const throw()
{
    return message;
}




