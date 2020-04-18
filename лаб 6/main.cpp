#include <iostream>
#include <vector>
#include <set>
#include "MyHeader.h"

bool predicate(int x) {
    return x < 0;
}

bool sort_predicate(int x, int y) {
    return x < y;
}

int main() {
    std::vector<int> v = {1, 5, 3, 3, 2};
    std::set<double> s = {-1, 2, 3.123, 4, 5};
    std::cout << "Для вектора: \n";
    if (noneOf(v.begin(), v.end(), predicate)) {
        std::cout << "Не существует элементов в заданном диапозоне\n";
    } else {
        std::cout << "Существует хотя бы один элемент в заданном диапозоне\n";
    }
    if (isSorted(v.begin(), v.end(), sort_predicate)) {
        std::cout << "Отсортирован\n";
    } else {
        std::cout << "Не отсортирован\n";
    }
    std::cout << findNot(v.begin(), v.end(), 1) << std::endl;
    std::cout << "Для сета: \n";
    if (noneOf(s.begin(), s.end(), predicate)) {
        std::cout << "Не существует элементов в заданном диапозоне\n";
    } else {
        std::cout << "Существует хотя бы один элемент в заданном диапозоне\n";
    }
    if (isSorted(s.begin(), s.end(), sort_predicate)) {
        std::cout << "Отсортирован\n";
    } else {
        std::cout << "Не отсортирован\n";
    }
    std::cout << findNot(s.begin(), s.end(), 1) << std::endl;
}