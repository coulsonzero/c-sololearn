#include <stdio.h>
#include <stdlib.h>

// realloc()

int main() {
    int *ptr;
    ptr = malloc(10 * sizeof(*ptr));
    if (ptr != NULL) *(ptr+2) = 50;
    // expands a more storage
    ptr = realloc(ptr, 100*sizeof(*ptr));
    *(ptr+30) = 75;
    printf("%d %d", *(ptr+2), *(ptr+30));   // 50 75
    free(ptr);
    ptr = NULL;


    return 0;
}