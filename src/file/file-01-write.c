#include <stdio.h>

// fprintf(fp, s)
// fputs(s, fptr)

int main() {
    FILE *fptr;

    // open a file("r", "w", "a", "b")
    fptr = fopen("myfile.txt", "w");    // file in cmake-build-debug

    // write file
    fprintf(fptr, "Inventory\n");
    fprintf(fptr, "%d %s %f\n", 100, "Widget", 0.29);
    fputs("End of List", fptr);

    fclose(fptr);
    return 0;
}
