#include <iostream>

class CircleBuffer {
private:
    int capacity;
    int *begin_;
public:
    CircleBuffer();
    explicit CircleBuffer(int n);

    int &operator[](int i);

    int *begin();
    int *end();

    void enterEnd();
    void enterBegin();
    void enter(int *it);
    void resize(int n);
};

