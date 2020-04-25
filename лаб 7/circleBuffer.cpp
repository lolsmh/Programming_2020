#include "circleBuffer.h"

CircleBuffer::CircleBuffer() : capacity(0){
    begin_ = new int[0];
}

CircleBuffer::CircleBuffer(int n) {
    this->capacity = n;
    begin_ = new int[capacity];
}

CircleBuffer::~CircleBuffer() {
    delete[](begin_);
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

void CircleBuffer::enterEnd(int num) {
    int *begin_2 = new int[capacity++];
    int count = 0;
    for (auto i = begin(); i <= end(); i++) {
        *(begin_2 + count) = *i;
        count++;
    }
    free(begin());
    begin_ = begin_2;
    *end() = num;
}

void CircleBuffer::enterBegin(int num) {
    int *begin_2 = new int[capacity++];
    int count = 1;
    for (auto i = begin(); i <= end(); i++) {
        *(begin_2 + count) = *i;
        count++;
    }
    free(begin());
    begin_ = begin_2;
    *begin() = num;
}

void CircleBuffer::enter(const int *it, int num) {
    int index = it - begin();
    int *begin_2 = new int[capacity++];
    int count = 0;
    for (auto i = begin(); i < begin() + index; ++i) {
        *(begin_2 + count) = *i;
        count++;
    }
    *(begin_2 + index) = num;
    count++;
    for (auto i = begin() + index; i < end(); i++) {
        *(begin_2 + count) = *i;
        count++;
    }
    free(begin());
    begin_ = begin_2;
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

