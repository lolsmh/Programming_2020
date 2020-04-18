#include "triangle.h"

void Triangle::getSquare() {
    double a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    double b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    double c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    double p = (a + b + c) / 2;
    square = sqrt(p * (p - a) * (p - b) * (p - c));

}

bool Triangle::operator==(Triangle& t1) {
    t1.getSquare();
    getSquare();
    return square == t1.square;
}

bool Triangle::operator>(Triangle t1) {
    t1.getSquare();
    getSquare();
    return square > t1.square;
}

bool Triangle::operator<(Triangle t1) {
    t1.getSquare();
    getSquare();
    return square < t1.square;
}

bool Triangle::operator!=(Triangle t1) {
    t1.getSquare();
    getSquare();
    return square != t1.square;
}