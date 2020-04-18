#include <iostream>
#include <cmath>
#include <vector>

#pragma once

template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

class exception {
protected:
    std::string error;
public:
    virtual std::string what() = 0;
};

class OverflowException : public exception {
public:
    OverflowException() {
        error = "ERROR: Queue Overflow";
    }

    std::string what() override {
        return error;
    }
};

class isEmptyException : public exception {
public:
    isEmptyException() {
        error = "ERROR: Queue is Empty";
    }

    std::string what() override {
        return error;
    }
};

template<typename T>
class queue {
private:
    int n, current;
    std::vector<T> q;

    void add(T num) {
        if (current >= n) {
            throw OverflowException();
        }
        q.insert(q.begin(), num);
        current++;
    }

    void remove() {
        if (current == 0) {
            throw isEmptyException();
        }
        current--;
        q[current] = 0;
    }

public:
    queue() : n(0), current(0) {
        q.resize(0);
    }

    explicit queue(int n) : n(n), current(0) {
        q.resize(n);
    }

    void front() {
        if (current - 1 >= 0) {
            std::cout << q[current - 1] << std::endl;
        } else {
            std::cout << q[0] << std::endl;
        }
    }

    void push(T num) {
        try {
            add(num);
        }
        catch (OverflowException error) {
            std::cout << error.what() << std::endl;
        }
    }

    void pop() {
        try {
            remove();
        }
        catch (isEmptyException error) {
            std::cout << error.what() << std::endl;
        }
    }
};


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
