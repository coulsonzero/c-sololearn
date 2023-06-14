#include <stdio.h>

int main() {
    // variable
    int num = 20;
    // constant
    const double PI = 3.14;

    printf("num: %d, pi: %f \n", num, PI);


    // multi-var
    int x = 3, y = 5;
    // assign value
    y = x += 2;
    printf("x: %d, y: %d\n", x, y);     // x: 5, y: 5


    return 0;
}

// num: 20, pi: 3.140000

