#include <iostream>
#include "method.h"
#include "method.h"

using namespace std;

int main() {
    int x, y;
    cout << "Задание 3" << endl << endl;
    cout << "Введите два числа: ";
    cin >> x >> y;
    link_task3(x, y);
    cout << "Резульат работы процедуры на ссылках: х = " << x << " у = " << y << endl;
    pointer_task3(&x, &y);
    cout << "Резульат работы процедуры на указателях: х = " << x << " у = " << y << endl << endl;
    double num;
    cout << "Задание 6" << endl << endl;
    cout << "Введите 1 вещественное число: ";
    cin >> num;
    link_task6(num);
    cout << "Резульат работы процедуры на ссылках: num1 = " << num << endl;
    cout << "Введите 2 вещественное число: ";
    cin >> num;
    pointer_task6(&num);
    cout << "Резульат работы процедуры на указателях: num2 = " << num << endl << endl;
    double radius;
    cout << "Задание 11 " << endl << endl;
    cout << "Введите радиус: ";
    cin >> radius;
    int minus;
    cout << "Введите вычитаемое значение: ";
    cin >> minus;
    link_task11(radius, minus);
    if (radius >= 0) {
        cout << "Резульат работы процедуры на ссылках: radius = " << radius << endl;
    } else {
        cout << "Радиус отрицательный / Ошибка" << endl;
    }
    cout << "Введите 2 радиус: ";
    cin >> radius;
    cout << "Введите вычитаемое значение: ";
    cin >> minus;
    pointer_task11(&radius, &minus);
    if (radius >= 0) {
        cout << "Резульат работы процедуры на указателях: radius = " << radius << endl << endl;
    } else {
        cout << "Радиус отрицательный / Ошибка" << endl << endl;
    }
    cout << "Задание 14" << endl << endl;
    cout << "Введите матрицу 3x3: " << endl;
    int matrix[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }
    link_task14(matrix);
    cout << "Результат работы процедуры на ссылках: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "Введите матрицу 3x3: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }
    pointer_task14(matrix);
    cout << "Результат работы процедуры на указателях: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}