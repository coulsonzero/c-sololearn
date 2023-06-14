#include <stdio.h>

int main() {
    //====== Data Type ====== //

    // integer  【修饰：short, long, unsigned(正数), signed(正负数均可)】
    int num = 20;

    // 浮点数：float、double、long double
    double PI = 3.14;
    float price = 123.672;

    // char
    char c = 'z';
    // string
    char name[] = "Tom Smith";
    char text[10];

    printf("%d \n", num);       // 20
    printf("%f \n", price);     // 123.672000, 默认保留6位小数
    printf("%.2f \n", PI);      // 3.14
    printf("%c \n", c);         // 'z'
    printf("%s \n", name);      // "Tom Smith"

    //====== 强制转换 ====== //
    printf("%d \n", (int)price);    // 123

    //====== sizeof() ====== //
    printf("size (short): %d \n", sizeof(short));       // 2
    printf("size   (int): %d \n", sizeof(int));         // 4
    printf("size  (long): %d \n", sizeof(long));        // 8
    printf("size (float): %d \n", sizeof(float));       // 4
    printf("size(double): %d \n", sizeof(double));      // 8
    printf("size  (char): %d \n", sizeof(char));        // 1
    printf("size(string): %d \n", sizeof(char[10]));    // 10

    return 0;
}