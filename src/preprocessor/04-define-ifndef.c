#include <stdio.h>

#define RATE 0.08

// 1. #ifndef-#define-#endif
#ifndef TERM
    #define TERM 24
#endif


#ifdef TRIPLE
    #define SQR(X) (x)*(x)
#else
    #define TRIPLE(x) (x)*3
#endif

int main() {
    /*
    #ifdef RATE
        #undef RATE
        printf("Redefining RATE\n");
        #define RATE 0.068
    #else
        #define RATE 0.068
    #endif
     */


    // 2. #ifdef-#undef-#endif
    #ifdef RATE
        #undef RATE
        printf("Redefining RATE\n");
    #endif
    #define RATE 0.068


    printf("%f\t%d\n", RATE, TERM);

    return 0;
}

// Redefining RATE
// 0.068000	24