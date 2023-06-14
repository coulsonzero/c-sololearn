#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char *s = NULL;
// s = malloc(40);

int main() {
    char s[20];
    char *ptr = NULL;

    strcpy(s, "John Smith");
    printf("s size: %d, len: %d\n", sizeof(s), strlen(s));      // s size: 20, len: 10

    ptr = malloc(strlen(s)+1);  // make room for \0
    strcpy(ptr, s);
    printf("%s\n", ptr);             // John Smith

    free(ptr);
    ptr = NULL;


    return 0;
}

