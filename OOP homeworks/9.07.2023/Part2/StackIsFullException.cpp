#include "StackIsFullException.h"

StackIsFullException ::StackIsFullException(const char *message, int code)

{
    this->message = message;
    this->code = code;
}

const char * StackIsFullException ::what() const throw()
{
    return message;
}


