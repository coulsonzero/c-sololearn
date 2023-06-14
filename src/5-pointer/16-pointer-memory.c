#include <stdio.h>

// function param: use a new memory address.
void test(int k);

int main() {
    int i = 12;
    printf("%x\n", &i);     // 6b9f3668
    test(i);                // 6b9f362c
    printf("%x\n", &i);     // 6b9f3668
    test(i);                // 6b9f362c

    return 0;
}

void test(int k) {
    printf("%x\n", &k);
}