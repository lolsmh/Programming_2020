#include "vector.h"

Vector::Vector(Vector const &v1) {
    x = v1.x;
    y = v1.y;
    z = v1.z;
}

void Vector::Show() {
    std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}

void Vector::Sum(Vector v1) {
    x += v1.x;
    y += v1.y;
    z += v1.z;
}

void Vector::Length() {
    std::cout << sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) << std::endl;
}

void Vector::Angle(Vector v1) {
    std::cout << (x * v1.x + y * v1.y + z * v1.z) /
                 (sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) * sqrt(pow(v1.x, 2) +
                                                                 pow(v1.y, 2) + pow(v1.z, 2))) << std::endl;
}