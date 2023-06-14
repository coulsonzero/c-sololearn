#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int *nums = malloc(4 * size(int));
// nums = realloc(nums, 8 * sizeof(int));


typedef struct {
    int *elems;
    int size;
    int cap;
} slice;


int main() {
    slice nums;

    // init slice
    nums.size = 0;
    nums.cap = 1;
    nums.elems = calloc(1, sizeof(*nums.elems));

    // expand by 5 more elements
    nums.elems = realloc(nums.elems, (5+nums.cap)*sizeof(nums.elems));
    if (nums.elems != NULL) nums.cap += 5;
    nums.size < nums.cap ? nums.elems[nums.size++] = 50 : printf("Need to expand slice.");

    // display elems
    for (int i = 0; i < nums.cap; i++) {
        printf("Elem %d: %d\n", i, nums.elems[i]);
    }


    return 0;
}