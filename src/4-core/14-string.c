#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main() {
    char *s = "hello";


    return 0;
}

void strlen_example() {
    // init
    char s1[6];
    char s2[6] = "hello";    // size: 6
    char s3[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char s4[ ] = {'h', 'e', 'l', 'l', 'o', '\0'};

    char *str1;
    char *str2[6];
    char *str3 = "hello";


    printf("strlen: %d\n", strlen(s1));  // 5
    printf("sizeof: %d\n", sizeof s1);   // 6
}

void assign() {
    char s[100];
    // sprintf(s, "Batman Jokerson");
    strcpy(s, "Batman Joker");
    printf("%s", s);

}

void strcat_example() {
    char str1[20] = "Hello ";
    char str2[6] = "World!";
    strcat(str1, str2); // 必须增加容量
    puts(str1);
    printf("%s\n", str1);
}

void strcat_example2() {
    char s[100] = "hello";
    strcat(s, " world");
    printf("%s\n", s);
}


void strcopy_example() {
    char *src = "Take the test.";
    char dst[strlen(src) + 1]; // +1 to accomodate for the null terminator
    strcpy(dst, src);
    dst[0] = 'M'; // OK
    printf("src = %s\ndst = %s\n", src, dst);
}

void char_toupper_tolower() {
    printf("%c\n", toupper('a'));   // A
    printf("%c\n", tolower('A'));   // a
    char c = 'F';
    printf("%c\n", c-'A'+'a');          // f
    char cc = 'f';
    printf("%c\n", cc-'a'+'A');         // F
}

void string_input_example() {
    char s[100];

    printf("Enter a text line: ");
    fgets(s, 100, stdin);   // scanf("%[^\n]s", s);
    fputs(s, stdout);
    printf("%s\n", s);
}

void string_atoi() {
    char s[100] = "120";
    int num = atoi(s);
    printf("%d\n", num);    // 120
}