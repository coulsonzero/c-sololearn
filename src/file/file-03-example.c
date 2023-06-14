#include <stdio.h>

// fgetc(fp)
// fgets(s, size, fp)
// fscanf(fp, ...)

int main() {
    FILE *fptr;
    char buffer[200], item[10];
    int stock, c;
    float price;

    // 1. write file
    fptr = fopen("myfile.txt", "w");
    fprintf(fptr, "Inventory\n");
    fprintf(fptr, "%d %s %f\n", 100, "Widget", 0.29);
    fputs("End of List", fptr);
    fclose(fptr);

    // 2. read file
    fptr = fopen("myfile.txt", "r");

    // read a line
    fgets(buffer, 20, fptr);
    printf("%s\n", buffer);     // Inventory

    fscanf(fptr, "%d%s%f", &stock, item, &price);
    printf("%d  %s  %4.2f\n", stock, item, price);  // 100  Widget  0.29

    // read the rest of the file
    while ((c = getc(fptr)) != EOF) {
        printf("%c", c);
    }
    // output: End of List

    // 3. close file
    fclose(fptr);

    return 0;
}