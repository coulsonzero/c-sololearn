#include <stdio.h>

int main() {
    char buffer[20];
    FILE *fptr = fopen("myfile.txt", "r");
    fgets(buffer, 20, fptr);
    printf("%s\n", buffer);     // Inventory
    fclose(fptr);

    return 0;
}