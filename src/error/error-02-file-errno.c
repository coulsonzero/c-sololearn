#include <stdio.h>
#include <stdlib.h>

// declare errno, or #include <errno.h>
//#include <errno.h>
extern int errno;


int main() {
    FILE *fptr;

    errno = 0;
    if ((fptr = fopen("date.txt", "r")) == NULL) {
        // stderr errno
        fprintf(stderr, "Error opening file. Error code: %d\n", errno);
        // exit
        exit(EXIT_FAILURE);
    }

    fclose(fptr);
    return 0;
}


// Error opening file. Error code: 2