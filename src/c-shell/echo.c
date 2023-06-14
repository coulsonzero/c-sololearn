#include <stdio.h>

/**
 * system terminal
 * use c language to  echo shell
 * step-1: gcc echo.c -o echo
 * step-2: ./echo hello,world
 */


// version 1: echo
int main (int argc, char* argv[]) {
    for (int i = 1; i < argc; i++) {
        printf("%s%s", argv[i], (i < argc - 1) ? " " : "");
    }
    printf("\n");

    return 0;
}

// version 2: echo
int main2 (int argc, char* argv[]) {
    while (--argc > 0)
        printf("%s%s", *argv++, (argc > 1) ? " " : "");
    printf("\n");
    return 0;
}
