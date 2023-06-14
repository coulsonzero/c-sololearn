#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>



int main() {
    FILE *fptr;

    errno = 0;
    if ((fptr = fopen("date.txt", "r")) == NULL) {
        perror("Error");
        fprintf(stderr, "%s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    fclose(fptr);
    return 0;
}


// Error: No such file or directory
// No such file or directory