#include <stdio.h>
#include <string.h>

union student {
    int age;
    float weight;
    char name[40];
};

// union: the largest member data type is used to determine the size of the memory to share and then all members use this one location.
// union members value: only display the largest member's value, other member is error value.
// union members memory address: use the same memory location of the largest member's address.


int main() {
    union student s;
    s.age = 21;
    s.weight = 120.6;
    strcpy(s.name, "John Smith");

    printf("age: %d, weight: %.2f, name: %s\n", s.age, s.weight, s.name);
    // [value]   age: 1852337994, weight: 17983765624912253034071851008.00, name: John Smith
    printf("age: %x, weight: %x, name: %x\n", &s.age, &s.weight, &s.name);
    // [address] age: 6f4eb640, weight: 6f4eb640, name: 6f4eb640
    printf("name: %x\n", &s.name);
    // [address] name: 6bd7364

    union student s2 = {.age = 21, .weight = 120.6};
    printf("\nage: %d, weight: %.2f\n", s2.age, s2.weight);
    // [value]  age: 1123103539, weight: 120.60
    printf("age: %x, weight: %x\n", &s2.age, &s2.weight);
    // [adderss] age: 6bc03618, weight: 6bc03618
    printf("weight: %x\n", &s2.weight);
    // [address] weight: 6bd73618



    return 0;
}