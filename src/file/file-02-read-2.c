#include <stdio.h>

void filecopy(FILE *ifptr, FILE *ofptr);

int main() {
    FILE *fptr;

    // file in cmake-build-debug
    if ((fptr = fopen("myfile.txt", "r")) == NULL) {
        printf("Error opening file.");
        return -1;
    } else {
        filecopy(fptr, stdout);
    }

    fclose(fptr);
    return 0;
}


void filecopy(FILE *ifp, FILE *ofp) {
    int c;
    while ((c = getc(ifp)) != EOF) {
        putc(c, ofp);
    }
}