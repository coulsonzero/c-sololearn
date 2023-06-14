#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int num;
    char *info;
} record;

int main() {
    record *r;
    int n = 2;
    char s[] = "This is information";
    // calloc(): allocate memory for struct
    r = calloc(n, sizeof(record));
    if (r != NULL) {
        for (int k = 0; k < n; k++) {
            (r+k)->num = k;
            (r+k)->info = malloc(sizeof(s));
            strcpy((r+k)->info, s);
        }
    }

    for (int k = 0; k < n; k++) {
        printf("%d\t%s\n", (r+k)->num, (r+k)->info);
    }

    free(r);
    r = NULL;


    return 0;
}

// 0	This is information
// 1	This is information