#include "MyHeader.h"

isEmptyException::isEmptyException() {
    error = "Queue is Empty";
}

std::string isEmptyException::what() {
    return error;
}
