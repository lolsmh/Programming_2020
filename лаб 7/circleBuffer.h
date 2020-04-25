#include <iostream>

class CircleBuffer {
private:
    int capacity;
    int *begin_;
public:
    CircleBuffer();
    explicit CircleBuffer(int n);
    ~CircleBuffer();

    int &operator[](int i);

    int *begin();
    int *end();

    void enterEnd(int num);
    void enterBegin(int num);
    void enterIt(const int *it, int num);
    void deleteEnd();
    void deleteBegin();
    void deleteIt(const int *it);
    void resize(int n);
};
