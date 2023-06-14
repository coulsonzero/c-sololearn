#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);        // &x is the address of variable x
    printf("%d\n", x);

    return 0;
}