#include <iostream>
#include "circleBuffer.h"

int main() {
    CircleBuffer buff(4);
    for (int i = 0; i < 4; ++i) {
        std::cin >> buff[i];
    }
    for (int i = 0; i < 8; ++i) {
        std::cout << buff[i] << ' ';
    }
    std::cout << std::endl;
    buff.resize(8);
    for (int i = 4; i < 8; ++i) {
        std::cin >> buff[i];
    }
    for (int i = 0; i < 10; ++i) {
        std::cout << buff[i] << ' ';
    }
    std::cout << std::endl;
    std::sort(buff.begin(), buff.end());
    for (int i = 0; i < 10; ++i) {
        std::cout << buff[i] << ' ';
    }
    std::cout << std::endl;
    buff.enterBegin();
    std::cout << *buff.begin() << std::endl;
    buff.enterEnd();
    std::cout << *buff.end() << std::endl;
    buff.enter(buff.begin() + 4);
    std::cout << *(buff.begin() + 4) << std::endl;
    for (int i = 0; i < 8; ++i) {
        std::cout << buff[i] << ' ';
    }
    return 0;
}
