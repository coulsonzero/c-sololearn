#include <stdio.h>
#include <stdlib.h>

int main() {
    // allocate memory for basic data type
    int *ptr = malloc(10);

    if (ptr != NULL) *(ptr+2) = 20;
    printf("3rd ele: %d", *(ptr+2));    // 3rd ele: 20

    // release memory
    free(ptr);
    ptr = NULL;

    return 0;
}

