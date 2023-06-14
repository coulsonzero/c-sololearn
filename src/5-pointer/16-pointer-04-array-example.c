#include <stdio.h>

int* get_even();

int main() {
    int *nums;
    nums = get_even();
    for (int k = 0; k < 5; k++) {
        printf("%d ", nums[k]);
    }
    // output: 4 6 8 10 12

    return 0;
}

int* get_even() {
    static int nums[5];
    int even = 2;
    for (int i = 0; i < 5; i++) {
        nums[i] = even += 2;
    }

    return nums;
}