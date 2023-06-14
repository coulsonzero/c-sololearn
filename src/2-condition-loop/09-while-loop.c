#include <stdio.h>

int main() {
    // while loop
    int count;
    while (count < 10) {
        printf("%d\n", count);
        count++;
    }

    // No output

    printf("==================\n");


    // do-while loop: always executes at least once.
    int cnt;
    do {
        printf("%d\n", cnt);
        cnt++;
    } while (cnt < 0);

    // 0


    //    break: immediately exiting a loop.
    int a = 5;
    while (a > 0) {
        if (a == 3) break;
        printf("a: %d\n", a);
        a--;
    }

    // a: 5
    // a: 4

    // continue: remain in the loop but skip ahead to the next.
    int b = 5;
    while (b > 0) {
        b--;
        if (b == 3) continue;
        printf("b: %d\n", b);
    }

    // b: 4
    // b: 2
    // b: 1
    // b: 0


    // goto: 直接跳转到标记位置
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i] == b[j])
                goto found;
        }
    }

    found:
        printf("Found it");

    return 0;
}