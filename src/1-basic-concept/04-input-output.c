#include <stdio.h>

void input_getchar();
void input_gets();
void input_fgets();
void input_scanf();
void input_scanf_2();
void input_scanf_string();

void output_example();
void output_fput();

int main() {
    output_fput();

    return 0;
}

/**====================== input =======================**
 * input methods:                                       *
 * 1. getchar(): char                                   *
 * 2. get()    : string                                 *
 * 3. fget()   : string                                 *
 * 4. scanf()  : any type                               *
 *                                                      *
 * example:                                             *
 * a) getchar()                                *
 * b) gets(s)                                           *
 * c) fgets(s, SIZE, stdin)                             *
 * d) scanf("%d %f %c %[^n]s", &num, &price, &c, name)  *
 **====================================================**/

void input_getchar() {
    // getchar() can get the first char of a line.
    char c = getchar();
    printf("c - you entered: %c", c);
}

// input : abcde
// output: a


void input_gets() {
    char s[100];
    // gets() has been deprecated in C (can result in buffer overflow)
    // it was deprecated int C++11 and removed int C++14
    gets(s);
    printf("s - you entered: %s", s);
}

// input : hello world!
// output: hello world!

void input_fgets() {
    #define SIZE 100
    char s[SIZE];
    fgets(s, SIZE, stdin);
    printf("s - you entered: %s", s);
}


void input_scanf() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a+b: %d", a+b);
}


void input_scanf_2() {
    int num;
    float price;
    char info[500];

    scanf("%d %f %s", &num, &price, info);
    printf("num: %d, price: %.2f, text: %s", num, price, info);
}
// 3
// 12.6
// the cloth is small size.
// num: 2, price: 12.60, text: the

void input_scanf_string() {
    char s[100];
    scanf("%[^\n]s", s);
    printf("%s", s);
}

// input : hello world!
// output: hello world!

/**==================== output =====================**
 * output methods:                                   *
 * 1. printf()                                       *
 * 2. putchar(): append a char                       *
 * 3. puts()   : append a string                     *
 * 4. fputs(s, stdout) : append a string             *
 *                                                   *
 * %d: integer                                       *
 * %f: float, double                                 *
 * %c: character                                     *
 * %s: string (character array)                      *
 * %*f will skip the input field                     *
 **=================================================**/

void output_example() {
    printf("hello");
    putchar('-');
    puts("world");
}
// hello-world

void output_fput() {
    char name[] = "John Smith";
    fputs(name, stdout);
}

