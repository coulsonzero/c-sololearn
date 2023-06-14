#include <stdio.h>

void swap(int* x, int* y);

int main() {
    int x = 3, y = 5;
    printf("x: %d, y: %d\n", x, y);     // x: 3, y: 5
    swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);     // x: 5, y: 3
    return 0;
}

void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}