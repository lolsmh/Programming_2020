#include "MyHeader.h"

void print_menu() {
    printf("Меню действий\n");
    printf("1. Добавить элемент\n");
    printf("2. Извлечь элемент\n");
    printf("3. Первый элемент очереди\n");
    printf("4. Выход\n");
    printf(">");
}

int get_variant(int count) {
    int variant;
    std::string s;
    getline(std::cin, s);
    while (sscanf(s.c_str(), "%d", &variant) != 1 || variant < 1 || variant > count) {
        getline(std::cin, s);
    }
    return variant;
}