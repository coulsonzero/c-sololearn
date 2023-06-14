#include <stdio.h>
#define T void*         // Template


T square(T num);

int main() {
    int x = 7;
    printf("output: %d\n", square(&x));     // 49

    int y = 4;
    printf("output: %d\n", square(&y));     // 16

    return 0;
}


T square(T num) {
    return (*(int*)num) * (*(int*)num);
}