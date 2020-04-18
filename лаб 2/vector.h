#pragma once

#include <iostream>
#include <cmath>

class Vector {
private:
    double x, y, z;
public:
    Vector() : x(0), y(0), z(0){}

    Vector(int x, int y, int z) : x(x), y(z), z(z) {}

    Vector(double x, double y, double z) : x(x), y(y), z(z) {}

    void Show();

    void Sum(Vector v1);

    void Length();

    void Angle(Vector v1);

    Vector(Vector const &v1);
};
