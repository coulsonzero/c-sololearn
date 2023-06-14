#include <stdio.h>

// FILE *fptr
// fopen(filename, mode): text
// fclose(fptr): success return 0, error return EOF


// EOF(end of file) is returned if there is an error in closing.

int main() {
    FILE *fptr;

    // open a file("r", "w", "a", "r+", "w+", "a+")
    fptr = fopen("myfile.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file.");
        return -1;
    }

    // close file pointer
    fclose(fptr);
    return 0;
}