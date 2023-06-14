#include <stdio.h>
#include <string.h>

// #x: stringification operator(convert a parameter to a string constant).
// #x -> "x"
#define TO_STR(x)       #x
#define STRLEN(x)       strlen(x)
// x##y -> xy   is a variable
#define VAR(name, num)  name##num   // VAR(x, 3)    -> x3
#define CONCAT(x, y)    x##y        // CONCAT(x, y) -> xy

int main() {
    printf("%s\n", TO_STR(123\12));         // 123
    printf("%s\n", TO_STR(123\\12));        // 123\12
    printf("%s\n", TO_STR(123\\\12));       // `123\`
    printf("%s\n", TO_STR(123\\\\12));      // 123\\12


    printf("%d\n", STRLEN(TO_STR(12345)));  // strlen("12345"): 5

    int x1 = 125, x2 = 250, x3 = 500;
    printf("%d\n", VAR(x, 1));            // x1: 125
    printf("%d\n", VAR(x, 2));            // x2: 250
    printf("%d\n", VAR(x, 3));            // x3: 500

    int x = 4, y = 5;
    int CONCAT(x, y) = x + y;       // CONCAT(x, y) -> xy = x + y
    printf("%d\n", xy);             // 9


    return 0;
}