#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int *nums = malloc(4 * sizeof(int));

    nums = realloc(nums, 10 * sizeof(int));

    for (int i = 0; i < 10; i++) {
        *(nums + i) = i;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }

    free(nums);
    nums = NULL;

    return 0;
}