#include <stdio.h>
#include <ctype.h>


int main() {
    // 1: true, 0: false
    printf("%d\n", isalpha('a'));   // letter (a-zA-Z)
    printf("%d\n", isupper('A'));
    printf("%d\n", islower('a'));

    printf("%d\n", isdigit('8'));   // digit (0-9)
    printf("%d\n", isalnum('8'));   // digit (0-9) || letter (a-zA-Z)
    printf("%d\n", isspace(' '));

    printf("%c\n", toupper('a'));
    printf("%c\n", tolower('A'));




    return 0;
}
