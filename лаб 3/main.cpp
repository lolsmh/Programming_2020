#include "triangle.h"
#include <iostream>

int main() {
    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    Triangle t1(x1, y1, x2, y2, x3, y3);
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    Triangle t2(x1, y1, x2, y2, x3, y3);
    if (t1 == t2) {
        std::cout << "equal\n";
    } else {
        std::cout << "not equal\n";
    }
    if (t1 > t2) {
        std::cout << "bigger\n";
    } else {
        std::cout << "not bigger\n";
    }
    if (t1 < t2) {
        std::cout << "smaller\n";
    } else {
        std::cout << "not smaller\n";
    }
    if (t1 != t2) {
        std::cout << "not equal\n";
    } else {
        std::cout << "equal\n";
    }
}