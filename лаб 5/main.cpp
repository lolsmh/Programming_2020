#include <iostream>
#include "MyHeader.h"

int main() {
    int n, m;
    double n1, m1;
    std::cout << "Введите два целых числа: " << std::endl;
    std::cin >> n >> m;
    swap(n, m);
    std::cout << n << ' ' << m << std::endl;
    std::cout << "Введите два вещественных числа: " << std::endl;
    std::cin >> n1 >> m1;
    swap(n1, m1);
    std::cout << n1 << ' ' << m1 << std::endl;
    std::cout << "Введите размер целочисленной очереди: " << std::endl;
    std::cin >> n;
    queue<int> q(n);
    int variant;
    do {
        print_menu();
        variant = get_variant(4);
        switch (variant) {
            case 1:
                std::cout << "\nВведите добавляемый элемент: " << std::endl;
                std::cin >> n;
                q.push(n);
                std::cout << '\n';
                break;
            case 2:
                std::cout << "\nЭлемент успешно удален\n" << std::endl;
                q.pop();
                break;
            case 3:
                std::cout << "\nПервый элемент в очереди: " << std::endl;
                q.front();
                std::cout << '\n';
                break;
        }
    } while (variant != 4);
}
