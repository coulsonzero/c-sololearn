#include <stdio.h>

// typedef: you don't need to use the keyword struct when declaring variables.

typedef struct {
    int age;
    int grade;
    char name[40];
} student;

int main() {
    // method-1
    student s1;
    s1.age = 18;
    s1.grade = 12;
    sprintf(s1.name, "Batman Joker");

    // method-2: type case needed
    student s2 = {19, 9, "John Smith"};


    // printf("adderss: %x, %x %x", s2.age, s2.grade, s2.name);
    // adderss: 13, 9 6d0a3600

    // ...
    return 0;
}








