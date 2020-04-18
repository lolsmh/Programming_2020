#include <iostream>
#include "IGeoFig.h"

int main() {
    EquilateralTriangle t;
    Hexagon h;
    t.initFromDialog();
    h.initFromDialog();
    std::cout << "Память, занимаемая всеми экземплярами класса треугольник: " << t.size() << std::endl;
    std::cout << "Память, занимаемая всеми экземплярами класса шестиугольник: " << h.size() << std::endl;
    std::cout << "Имя класса: " << t.classname() << std::endl;
    std::cout << "Имя класса: " << h.classname() << std::endl;
    t.draw();
    h.draw();
    std::cout << "Периметр треугольника: " << t.perimeter() << std::endl;
    std::cout << "Периметр шестигольника: " << h.perimeter() << std::endl;
    std::cout << "Площадь треугольника: " << t.square() << std::endl;
    std::cout << "Площадь шестигольника: " << h.square() << std::endl;
    return 0;
}
