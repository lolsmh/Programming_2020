#include <iostream>
#include <cmath>
#include <vector>

#pragma once

template<typename T>
void swap(T &a, T &b) {
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
    OverflowException();

    std::string what() override;
};

class isEmptyException : public exception {
public:
    isEmptyException();

    std::string what() override;
};


template<typename T>
class queue {
private:
    int n, current;
    std::vector<T> q;

    void add(T num);

    void remove();

public:
    queue();

    explicit queue(int n);

    void front();

    void push(T num);

    void pop();
};

void print_menu();

int get_variant(int count);
