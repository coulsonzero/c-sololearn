#include <stdio.h>

#define LEVEL 7

// 1. #if-statement: only print once result.
// 2. #if defined(LEVEL)  =  #ifdef LEVEL
//    #if !defined(LEVEL) =  #ifndef LEVEL

int main() {
    int num = 0;

    // only exec once
    #if LEVEL > 6
        // statement
        num = 1;
    #elif LEVEL > 5
        // statement
        num = 2;
    #elif LEVEL > 4
        // statement
        num = 3;
    #else
        // statement
        num = 4;
    #endif
    printf("num: %d\n", num);
    // output: 1


    // defined()
    #if defined(_CLASS) || defined(LEVEL)
        printf("%s\n", "defined lever");
    #else
        printf("%s\n", "not defined");
    #endif
    // output: defined lever



    #ifndef LEVEL
        printf("%s\n", "not defined lever");
    #else
        printf("%s\n", "defined lever");
    #endif
    // output: defined lever

    return 0;
}