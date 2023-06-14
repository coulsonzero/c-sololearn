#include <stdio.h>

void*  square(const void* num);

int main() {
    int x = 6;
    printf("output: %d\n", square(&x));     // 36

    return 0;
}


void*  square(const void* num) {
    return (*(int*)num) * (*(int*)num);
}