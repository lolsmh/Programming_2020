#include "circleBuffer.h"


CircleBuffer::CircleBuffer() : capacity(0) {
    begin_ = new int[0];
}

CircleBuffer::CircleBuffer(int n) {
    this->capacity = n;
    begin_ = new int[capacity];
}

int &CircleBuffer::operator[](int i) {
    return *(begin() + i % capacity);
}

int *CircleBuffer::begin() {
    return begin_;
}

int *CircleBuffer::end() {
    return begin() + (capacity - 1);
}

void CircleBuffer::enterEnd() {
    int num;
    std::cin >> num;
    *end() = num;
}

void CircleBuffer::enterBegin() {
    int num;
    std::cin >> num;
    *begin() = num;
}

void CircleBuffer::enter(int *it) {
    int num;
    std::cin >> num;
    *it = num;
}

void CircleBuffer::resize(int n) {
    int *begin_2 = new int[n];
    int count = 0;
    for (auto i = begin(); i <= end(); i++) {
        if (count != n) {
            *(begin_2 + count) = *i;
            count++;
        } else {
            break;
        }
    }
    free(begin());
    capacity = n;
    begin_ = begin_2;
}
