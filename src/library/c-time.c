#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calc_time();
void calc_date();

int main() {
    calc_date();

    return 0;
}


void calc_time() {
    long i = 10000000L;
    clock_t start, finish;
    double duration;
    /* 测量一个事件持续的时间*/
    printf( "Time to do %ld empty loops is ", i );
    start = clock();
    while(i--);
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf( "%f seconds\n", duration);
//    system("pause");
}

// Time to do 10000000 empty loops is 0.028429 seconds


void calc_date() {
    struct tm *local;
    time_t t;
    t = time(NULL);
    local = localtime(&t);
    // printf("Local hour is: %d\n",local->tm_hour);
    printf("Now is  %02d:%02d:%02d\n",local->tm_hour, local->tm_min, local->tm_sec);
    printf("Date is %4d-%02d-%02d\n",local->tm_year+1900, local->tm_mon+1, local->tm_mday);

    // local = gmtime(&t);
    // printf("UTC hour is: %d\n",local->tm_hour);
}