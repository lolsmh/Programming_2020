//
// Created by С on 14.02.2020.
//
#include <cmath>

void link_task3(int &x, int &y) {
    x > y ? x = x % y : y = y % x;
}

void link_task6(double &num) {
    num = round(num);
}

void link_task11(double &radius, int &minus) {
    radius -= minus;
}

void link_task14(int (&matrix)[3][3]) {
    int t;
    for (int i = 0; i < 3; ++i) {
        for (int j = i; j < 3; ++j) {
            t = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = t;
        }
    }
}

void pointer_task3(int *x_pointer, int *y_pointer) {
    *x_pointer > *y_pointer ? *x_pointer = *x_pointer % *y_pointer : *y_pointer = *y_pointer % *x_pointer;
}

void pointer_task6(double *num_pointer) {
    *num_pointer = round(*num_pointer);
}

void pointer_task11(double *radius_pointer, const int *minus_pointer) {
    *radius_pointer -= *minus_pointer;
}

void pointer_task14(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            int t = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = t;
        }
    }
}

