#include <stdio.h>

int add(int n1, int n2);
int subtract(int n1, int n2);
int multiply(int n1, int n2);
int divide(int n1, int n2);

int main() {
    int x, y, choice;
    int (*op[4])(int, int);
    op[0] = add;
    op[1] = subtract;
    op[2] = multiply;
    op[3] = divide;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Enter a number\n0(+)\t1(-)\t2(*)\t3(/) : ");
    scanf("%d", &choice);
    char s[4] = "+-*/";
    printf("output: %d%c%d = %d\n", x, s[choice], y, op[choice](x, y));

    return 0;
}

/**
 * Enter two integers: 3 6
 * Enter a number
 * 0(+)	  1(-)	2(*)   3(/) : 2
 * output: 3*6 = 18
 */

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    return x / y;
}