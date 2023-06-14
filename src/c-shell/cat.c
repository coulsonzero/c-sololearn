#include <stdio.h>
#include <stdlib.h>

// use c to exe cat shell
// 1. gcc cat.c -o cat
// 2. ./cat myfile.txt

int main(int argc, char *argv[]) {
    FILE *fptr;
    void filecopy(FILE *ifp, FILE *ofp);
    char *prog = argv[0];   // handle error 1


    if (argc == 1)  filecopy(stdin, stdout);
    else
        while (--argc > 0) {
            if ((fptr = fopen(*++argv, "r")) == NULL) {
                // printf("cat: can't open %s\n", *argv);
                // return 1;

                // handle error 2
                fprintf(stderr, "%s: can't open %s\n", prog, *argv);
                exit(1);
            } else {
                filecopy(fptr, stdout);
                fclose(fptr);
            }
        }

    // handle error 3
    if (ferror(stdout)) {
        fprintf(stderr, "%s: error writing stdout\n", prog);
        exit(2);
    }
    return 0;
}


void filecopy(FILE *ifp, FILE *ofp) {
    int c;
    while ((c = getc(ifp)) != EOF) {
        putc(c, ofp);
    }
}