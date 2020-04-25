#include <iostream>
#include "circleBuffer.h"

int main() {
    CircleBuffer buff(2);
    for (int i = 0; i < 2; ++i) {
        std::cin >> buff[i]; //доступ по индексу на ввод
    }
    std::cout << std::endl;
    buff.enterEnd(5); //5 в конец буфера
    for (int i = 0; i < 6; ++i) {
        std::cout << buff[i] << ' '; //доступ по индексу на вывод
    }
    std::cout << std::endl;
    buff.enterBegin(8); //8 в начало буфера
    for (int i = 0; i < 8; ++i) {
        std::cout << buff[i] << ' ';
    }
    std::cout << std::endl;
    buff.enter(buff.begin() + 2, 3); //3 на место [2] позиции
    for (int i = 0; i < 10; ++i) {
        std::cout << buff[i] << ' ';
    }
    std::cout << std::endl;
    buff.resize(10); //изменил размер с 5 на 10
    for (int i = 5; i < 10; ++i) { //ввел оставшиеся 5
        std::cin >> buff[i];
    }
    for (int i = 0; i < 20; ++i) {
        std::cout << buff[i] << ' ';
    }
    std::cout << std::endl;
    std::sort(buff.begin(), buff.end()); //сортировка стандартныйм stl алгоритмом
    for (int i = 0; i < 20; ++i) {
        std::cout << buff[i] << ' ';
    }
    return 0;
}
