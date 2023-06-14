#include <stdio.h>

int strlen(char *s) {
    char *p = s;
    while (*p++ != '\0');
    return p - s;
};


int main() {
    char *s = "hello";
    printf("%d\n", strlen(s));  // size: 6

    return 0;
}