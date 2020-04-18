#include "MyHeader.h"

OverflowException::OverflowException() {
    error = "Queue Overflow";
}

std::string OverflowException::what() {
    return error;
}
