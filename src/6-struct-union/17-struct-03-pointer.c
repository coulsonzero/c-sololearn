#include <stdio.h>
#include <string.h>

struct student {
    int age;
    int grade;
    char name[40];
} ;

void showStruct(struct student *st) {
    printf("Student: \n");
    printf("age: %d\n", st->age);      // (*st).age is the same as st->age
    printf("grade: %d\n", st->grade);
    printf("name: %s\n", st->name);
}


int main() {
    struct student s = {21, 5, "John Smith"};
    // struct student s = {.age = 21, .grade = 5, .name = "John Smith"};

    showStruct(&s);

    return 0;
}