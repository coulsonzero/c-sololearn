#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE *fptr = fopen("test", "r");
    if (feof(fptr)) {
        printf("End of file reached");
        exit(42);
    } else if (ferror(fptr)) {
        printf("I/O error reading file");
        exit(EXIT_FAILURE);
    }

    return 0;
}