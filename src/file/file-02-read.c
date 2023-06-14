#include <stdio.h>

// getc(fp)

int main() {
    FILE *fptr;

    // read file
    if ((fptr = fopen("myfile.txt", "r")) == NULL) {
        printf("Error opening file.");
        return -1;
    } else {
        // read the rest of the file
        int c;
        while ((c = getc(fptr)) != EOF) {
            printf("%c", c);
        }
    }

    fclose(fptr);
    return 0;
}
