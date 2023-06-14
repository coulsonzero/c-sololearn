#include <stdio.h>

void hello(int num);
int sum(int a, int b);
void welcome();

int main() {
    void (*p[2])() = {hello, welcome};
    for (int i = 0; i < 2; i++) {
        p[i]();
    }

    return 0;
}

void function_pointer_example() {
    // first
    hello(3);

    // second: function pointer
    void (*ptr)(int);
    ptr = hello;       // ptr = &hello
    ptr(3);            // (*ptr)(3)

    int (*psum)(int, int);
    psum = sum;
    psum(3, 2);
}

void hello(int num) {
    for (int i = 0; i < num; i++) {
        printf("hello-%d\n", i);
    }
}

// hello-0
// hello-1
// hello-2

int sum(int a, int b) {
    return a + b;
}


void welcome() {
    printf("welcome to here\n");
}
