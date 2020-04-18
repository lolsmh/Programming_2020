#include "MyHeader.h"

template<typename T>
void queue<T>::add(T num) {
    if (current >= n) {
        throw OverflowException();
    }
    q.insert(q.begin(), num);
    current++;
}

template<typename T>
void queue<T>::remove() {
    if (current == 0) {
        throw isEmptyException();
    }
    current--;
    q[current] = 0;
}

template<typename T>
queue<T>::queue()  : n(0), current(0) {
    q.resize(0);
}

template<typename T>
queue<T>::queue(int n) : n(n), current(0) {
    q.resize(n);
}

template<typename T>
void queue<T>::front() {
    if (current - 1 >= 0) {
        std::cout << q[current - 1] << std::endl;
    } else {
        std::cout << q[0] << std::endl;
    }
}

template<typename T>
void queue<T>::push(T num) {
    try {
        add(num);
    }
    catch (OverflowException error) {
        std::cout << error.what() << std::endl;
    }
}

template<typename T>
void queue<T>::pop() {
    try {
        remove();
    }
    catch (isEmptyException error) {
        std::cout << error.what() << std::endl;
    }
}