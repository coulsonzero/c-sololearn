#include <stdio.h>

int main() {

    void *ptr;
    int x = 12;
    float y = 3.14;
    char c = 'z';

    printf("address: %x\n", ptr);     // 0

    ptr = &x;
    printf("%d\n", *(int*)ptr);       // 12
    ptr = &y;
    printf("%.2f\n", *(float*)ptr);   // 3.14
    ptr = &c;
    printf("%c\n", *(char*)ptr);      // z


    return 0;
}