#include <stdio.h>

int atoi(char s[]) {
    int n = 0;
    for (int i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

int main() {
    char s[] = "16752";
    printf("%d \n", atoi(s));  // 16752

    return 0;
}