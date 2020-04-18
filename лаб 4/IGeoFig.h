#pragma once

#include <iostream>
#include <cmath>

class IGeoFig {
public:
    virtual double square() = 0;

    virtual double perimeter() = 0;
};

class CVector2D {
public:
    double x, y;
};

class IPhysObject {
public:
    virtual double mass() = 0;

    virtual CVector2D position() = 0;

    virtual bool operator==(const IPhysObject &ob) const = 0;

    virtual bool operator<(const IPhysObject &ob) const = 0;
};

class IPrintable {
public:
    virtual void draw() = 0;
};

class IDialogInitiable {
    virtual void initFromDialog() = 0;
};

class BaseCObject {
public:
    virtual const char *classname() = 0;

    virtual unsigned int size() = 0;
};

class EquilateralTriangle
        : public IGeoFig,
          public IPrintable,
          public IDialogInitiable,
          public BaseCObject,
          public CVector2D {
private:
    double x1{}, x2{}, x3{}, y1{}, y2{}, y3{}, a = a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)),
            b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2)), c = sqrt(pow(x3 - x1, 2)
                                                                  + pow(y3 - y1, 2));
public:
    EquilateralTriangle();

    EquilateralTriangle(int a1, int b1, int c1);

    void initFromDialog() override;

    unsigned int size() override;

    void draw() override;

    const char *classname() override;

    double perimeter() override;

    double square() override;
};

class Hexagon
        : public IGeoFig,
          public IPrintable,
          public IDialogInitiable,
          public BaseCObject,
          public CVector2D {
private:
    double a{};
public:
    Hexagon();

    explicit Hexagon(double a1);

    unsigned int size() override;

    void initFromDialog() override;

    void draw() override;

    const char *classname() override;

    double perimeter() override;

    double square() override;
};
