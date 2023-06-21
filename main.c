#include <stdio.h>
#include <time.h>

void calc_time();

int main() {
    calc_time();
    return 0;
}
// Output: Hello, World!

void calc_time() {

    clock_t start, finish;
    double duration;
    /* 测量一个事件持续的时间*/
    printf( "Time to do empty loops is ");
    start = clock();
    for (long i = 0 ; i < 1000000000L; ++i) {

    }
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf( "%f seconds\n", duration);
//    system("pause");
}