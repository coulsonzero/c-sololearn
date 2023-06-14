#include <stdio.h>

int sum_array(int* nums, int size);

int main() {
    int nums[5] = {1, 2, 3, 4, 5};
    printf("output: %d\n", sum_array(nums, 5));     // 15

    return 0;
}


int sum_array(int* nums, int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans += nums[i];
    }

    return ans;
}