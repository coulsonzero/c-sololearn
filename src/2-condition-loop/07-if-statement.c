#include <stdio.h>

//   condition: (A) x >= 2  (B) single no-zero value is true, such as 12, -2, 3.14, "hello", and so on...
// `?`operator: int y = (x > 2) ? 3 : x;


int main() {
    int num = 12;

    // 1. relational operator
    if (num > 0) {
        // statements
    } else if (num < 0) {
        // statements
    } else {
        // statements
    }


    // 2. no-zero value: true
    int x = 2;  // other: -2, 3.14, "hello"
    if (x) {
        printf("pass\n");
    } else {
        printf("fail");
    }


    // `?`operator
    int a = 6;
    int b = a < 2 ? 3 : a++;

    printf("%d\n", b);  // 6
    printf("%d\n", a);  // 7

    return 0;
}