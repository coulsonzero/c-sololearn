#include <stdio.h>

// binary file: array or struct
// mode: rb, wb, ab, rb+, wb+, ab+
// method: fwrite(), fread()

int main() {
    FILE *fptr;

    // generate array for numbers
    #define SIZE 10
    int arr[SIZE];
    for (int k = 0; k < SIZE; k++) {
        arr[k] = k;
    }

    // write array to file
    fptr = fopen("datafile.bin", "wb");
    fwrite(arr, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr);
    fclose(fptr);

    // read array from file
    int x[10];
    fptr = fopen("datafile.bin", "rb");
     fread(x, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr);
    fclose(fptr);

    // print array
    for (int k = 0; k < SIZE; k++) {
        printf("%d", x[k]);
    }


    return 0;
}

// 0123456789