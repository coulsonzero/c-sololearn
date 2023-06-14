#include <stdio.h>
#include <stdlib.h>

// exit
// 1: EXIT_SUCCESS, 0: EXIT_FAILURE

int main() {
    int num = 0;
    if (num == 0) {
        printf("Divisor is 0. Program exiting.");
        exit(EXIT_FAILURE);
    } else {
        printf("num: %d", num);
    }
    return 0;
}



