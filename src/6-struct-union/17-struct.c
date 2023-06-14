#include <stdio.h>


struct student {
    int age;
    int grade;
    char name[40];
};

int main() {
    // struct init method-1
    struct student s1;
    s1.age = 18;
    s1.grade = 12;
    sprintf(s1.name, "Batman Joker");

    // method-2: type case needed
    struct student s2 = {19, 9, "John Smith"};

    // method-3
    struct student s3;
    s3 = (struct student) {19, 9, "John Smith"};

    // method-4
    struct student s4 = {.grade = 9, .name = "John Smith", .age = 19};

    struct student s5;
    s5 = s1;

    return 0;
}