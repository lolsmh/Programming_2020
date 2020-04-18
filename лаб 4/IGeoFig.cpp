#include "IGeoFig.h"

EquilateralTriangle::EquilateralTriangle(int a1, int b1, int c1)
        : CVector2D(), x1(0), x2(0), x3(0), y1(0), y2(0), y3(0) {
    a = a1;
    b = b1;
    c = c1;
}

EquilateralTriangle::EquilateralTriangle() : CVector2D(), x1(0), x2(0), x3(0), y1(0), y2(0), y3(0), a(0), b(0), c(0) {}

void EquilateralTriangle::initFromDialog() {
    std::cout << "Введите параметры треугольника: \n";
    std::cin >> a >> b >> c;
}

unsigned int EquilateralTriangle::size() {
    return sizeof(EquilateralTriangle);
}

void EquilateralTriangle::draw() {
    std::cout << "Координаты фигуры: (" << x1 << "; " << y1 << ")" << " (" << x2 << "; " << y2 << ")" << " (" << x3
              << "; " << y3 << ")" << std::endl << "Значения сторон: a = " << a << ", b = " << b << ", c = " << c
              << std::endl;
}

const char *EquilateralTriangle::classname() {
    return "EquilateralTriangle";
}

double EquilateralTriangle::perimeter() {
    return a + b + c;
}

double EquilateralTriangle::square() {
    double p = perimeter() / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

Hexagon::Hexagon() : CVector2D(), a(0) {}

Hexagon::Hexagon(double a1) : CVector2D() {
    a = a1;
}

unsigned int Hexagon::size() {
    return sizeof(Hexagon);
}

void Hexagon::initFromDialog() {
    std::cout << "Введите сторону шестиугольника: \n";
    std::cin >> a;
}

void Hexagon::draw() {
    std::cout << "Сторона шестиугольника: " << a << std::endl;
}

const char *Hexagon::classname() {
    return "Hexagon";
}

double Hexagon::perimeter() {
    return a * 6;
}

double Hexagon::square() {
    return 3 * sqrt(3) / 2 * pow(a, 2);
}
