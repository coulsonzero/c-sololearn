#include <stdio.h>

// int *p = NULL;
// p = &num;
// *p, (*p)++

int main() {
    int *p = NULL;
    printf("p address: %x\n", p);       // p address: 0

    int j = 12;
    p = &j;

    printf("j address: %x\n", &j);      // j address: 6b28f65c
    printf("p address: %x\n", p);       // p address: 6b28f65c
    printf("j value: %d\n", j);         // j value: 12
    printf("p value: %d\n", *p);        // j value: 12

    return 0;
}