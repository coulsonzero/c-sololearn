#include <stdio.h>

int main() {
    int x = 5;
    int y;

    int *p = NULL;
    p = &x;

    y = *p + 2;  // y is 7
    y += *p;     // y is 12 now
    *p = y;      // x is 12;
    (*p)++;      // x is 13


    return 0;
}