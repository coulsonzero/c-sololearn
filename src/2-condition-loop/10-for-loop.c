#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    for (int i = 0, j = 5; i < j; i++, j--) {
        printf("%d\n", i);
    }

    int l = 0;
    for (; l < 5; l++) {
        printf("%d\n", l);
    }


    return 0;
}