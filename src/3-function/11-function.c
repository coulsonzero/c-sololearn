#include <stdio.h>

// declaration
int square(int num);

int main() {
    int res = square(3);
    printf("%d\n", res);    // 9

    return 0;
}

// definition
int square(int num) {
    return num * num;
}

