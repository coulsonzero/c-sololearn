#include <stdio.h>
#include <stdlib.h>

// malloc(size) : allocate memory for basic data type
// calloc() : allocate memory for struct
// realloc(ptr, size): expands a more storage
// free()   : release memory


int main() {
    int *ptr;

    printf("address: %x, size: %d\n", ptr, sizeof(*ptr));    // address: 0, size: 4
    // 1. allocate memory
    ptr = malloc(10 * sizeof(*ptr));
    printf("address: %x, size: %d\n", ptr, );    // address: 2df046a0, size: 4

    if (ptr != NULL) *(ptr + 2) = 50;
    printf("3rd elem equals to %d", *(ptr + 2));            // 50

    // 2. release memory
    free(ptr);
    // 3. 防止出现野指针
    ptr = NULL;

    return 0;
}

