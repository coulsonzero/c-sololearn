#include <stdio.h>

//  union members use the same memory location, always output the largest member's value, other member's value is error
// struct members use the different memory location

union point {
    int x;
    int y;
};

int main() {
    union point p = {.x = 2, .y = 5};
    printf("%d %d\n", p.x, p.y);              // x: 5  y: 5
    printf("adderss: %x\t%x\n", &p.x, &p.y);  // adderss: 6b7d7668	6b7d7668

    union point p2;
    p2.x = 6;
    p2.y = 8;
    printf("%d %d\n", p2.x, p2.y);   // 8 8


    return 0;
}