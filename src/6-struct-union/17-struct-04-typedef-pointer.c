#include <stdio.h>
#include <string.h>

typedef struct {
    int age;
    int grade;
    char name[40];
} student;

void update_student(student *st);
void display_student(student *st);

int main() {
    student s;
    update_student(&s);
    display_student(&s);

    return 0;
}

void update_student(student *st) {
    st->age = 21;
    st->grade = 5;
    strcpy(st->name, "John Smith");
}

void display_student(student *st) {
    printf("%d\t%d\t%s\n", st->age, st->grade, st->name);
}



