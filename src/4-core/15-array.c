#include <stdio.h>

int main() {
    int nums1[5];
    int nums[5] = {1, 3, 5, 7, 9};

    // change element
    nums[1] = 9;
    // print the value of element
    printf("nums[1]: %d\n", nums[1]);   // 9

    // iter
    for (int i = 0; i < 5; i++) {
        printf("[%d]: %d\n", i, nums[i]);
    }


    // two-dimensional arrays
    int nums3[2][3];
    int nums4[2][3] = {{1,2,3}, {4,5,6}};

    for(int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", nums4[i][j]);
        }
        printf("\n");
    }
    return 0;
}