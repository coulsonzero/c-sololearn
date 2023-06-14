#include <stdio.h>

int main() {
    FILE *fptr;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    fptr = fopen("datafile.bin", "wb");
    fwrite(arr, sizeof(int), 10, fptr);
    fclose(fptr);

    return 0;
}