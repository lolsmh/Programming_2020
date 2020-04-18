#include <iostream>
#include "vector.h"

int main() {
    int x, y, z;
    double x1, y1, z1;
    Vector v;
    std::cout << ">> Default vector \n";
    v.Show();
    std::cout << ">> Enter integer coordinates\n";
    std::cin >> x >> y >> z;
    Vector v1(x, y, z);
    std::cout << ">> New vector v1\n";
    v1.Show();
    std::cout << ">> Enter float coordinates\n";
    std::cin >> x1 >> y1 >> z1;
    Vector v2(x1, y1, z1);
    std::cout << ">> New vector v1\n";
    v2.Show();
    std::cout << ">> v1 + v2\n";
    v1.Sum(v2);
    v1.Show();
    std::cout << ">> v1 length\n";
    v1.Length();
    std::cout << ">> v1 / v angle\n";
    v1.Angle(v);
    std::cout << ">> v1 copy v2\n";
    Vector v3(v2);
    v3.Show();
    return 0;
}