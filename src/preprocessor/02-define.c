#include <stdio.h>

#define PI 3.14
#define AREA(r) PI*r*r
#define MAX(A, B) ((A) > (B) ? (A) : (B))


#define VERY_LONG_CONSTANT \
23.678901
#    define SQUARE(x) \
     x*x

int main() {
    float r = 2;
    printf("PI: %3.2f\n", PI);          // 3.14
    printf("Area: %5.2f\n", AREA(r));   // 12.56
    printf("%d\n", MAX(3, 5));   // 5

    return 0;
}
