#pragma once

#include <iostream>
#include <cmath>

class Triangle {
private:
    double x1, y1, x2, y2, x3, y3, square{};
public:
    Triangle() : x1(0), x2(0), x3(0), y1(0), y2(0), y3(0) {};

    Triangle(double x1, double x2, double x3, double y1, double y2, double y3) : x1(x1), x2(x2), x3(x3), y1(y1), y2(y2),
                                                                                 y3(y3) {};

    void getSquare();

    bool operator==(Triangle& t1);

    bool operator>(Triangle t1);

    bool operator<(Triangle t1);

    bool operator!=(Triangle t1);
};


