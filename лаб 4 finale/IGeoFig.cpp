#include <iostream>
#include "IGeoFig.h"
#include <cmath>

Hexagon::Hexagon(){
    centre = {0, 0};
    a = 0;
    mass_ = 0;
    position_ = {0, 0};

}

Hexagon::Hexagon(const Point &centre_, const double &a, const double &mass__, const CVector2D &position__)
{
    centre = centre_;
    this->a = a;
    mass_ = mass__;
    position_ = position__;
}

Hexagon::Hexagon(const Hexagon &obj){
    centre = obj.centre;
    a = obj.a;
    mass_ = obj.mass_;
    position_ = obj.position_;
}

void Hexagon::initFromDialog(){
    std::cout << "введите координаты центра: ";
    centre.initFromDialog();
    std::cout << "введите сторону: ";
    std::cin >> a;
    std::cout << "введите массу: ";
    std::cin >> mass_;
}

double Hexagon::square() const {
    return 3 * sqrt(3) / 2 * pow(a, 2);
}

double Hexagon::perimeter () const {
    return a * 6;
}

void Hexagon::draw() const {
    std::cout << "Центр масс: " << std::endl;
    centre.printCoordinate();
    std::cout << "Сторона: " << a << std::endl;
    std::cout << "Масса:  " << mass_ << std::endl;

}

unsigned int Hexagon::size() const  {
    return sizeof(*this);
}

double Hexagon::mass() const  {
    return mass_;
}

CVector2D Hexagon::position() const  {
    return position_;

}

const char* Hexagon::classname() const {
    return "Hexagon";
}

bool Hexagon::operator == (const IPhysObject &obj) const {
    return this->mass() == obj.mass();
}

bool Hexagon::operator < (const IPhysObject &obj) const {
    return this->mass() < obj.mass();
}


EquilateralTriangle::EquilateralTriangle(){
    A = {0, 0};
    B = {0, 0};
    C = {0, 0};
    mass_ = 0;
    position_ = {0, 0};

}

EquilateralTriangle::EquilateralTriangle(const Point &a, const Point &b, const Point &c,const double &mass__, const CVector2D &position__)
{
    A = a;
    B = b;
    C = c;
    mass_ = mass__;
    position_ = position__;
}

EquilateralTriangle::EquilateralTriangle(const EquilateralTriangle &obj){
    A = obj.A;
    B = obj.B;
    C = obj.C;
    mass_ = obj.mass_;
    position_ = obj.position_;
}

void EquilateralTriangle::initFromDialog () {
    std::cout << "Введите координаты" << std::endl;
    std::cout << "A: " << std::endl;
    A.initFromDialog();
    std::cout << "B: " << std::endl;
    B.initFromDialog();
    std::cout << "C: " << std::endl;
    C.initFromDialog();
    std::cout << "Масса: " << std::endl;
    std::cin >> mass_;
    std::cout << std::endl;
}


double EquilateralTriangle::square () const  {
    return (pow(AB.lenghtVector(), 2) * sqrt(3))/4;
}

double EquilateralTriangle::perimeter () const  {
    return AB.lenghtVector() * 3;
}

void EquilateralTriangle::draw () const {
    std::cout << "A: " << std::endl;
    A.printCoordinate();
    std::cout << "B: " << std::endl;
    B.printCoordinate();
    std::cout << "C: " << std::endl;
    C.printCoordinate();
    std::cout << "Масса: " << mass() << std::endl;
}

unsigned int EquilateralTriangle::size() const  {
    return sizeof(*this);
}

double EquilateralTriangle::mass() const  {
    return mass_;
}

CVector2D EquilateralTriangle::position () const  {
    return position_;
}

const char* EquilateralTriangle::classname() const {
    return "Equral triangle";
}

bool EquilateralTriangle::operator == (const IPhysObject &obj) const {
    return this->mass() == obj.mass();
}
bool EquilateralTriangle::operator < (const IPhysObject &obj) const {
    return this->mass() < obj.mass();
}