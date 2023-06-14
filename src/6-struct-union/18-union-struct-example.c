#include <stdio.h>
#include <string.h>


struct person {
    int age;
    char name[40];
    union {
        int id_num;
        char text[20];
    } password;
};

int main() {
    // init-1
    struct person p;
    struct person *ptr = &p;
    ptr->age = 20;
    strcpy(ptr->name, "John Smith");
    strcpy(ptr->password.text, "admin01299");

    printf("person: %d, %s,  ", p.age, p.name);
    ptr->age < 18 ? printf("%d", ptr->password.id_num) : printf("%s", ptr->password.text);

    // init-2
    struct person p2 = {.age = 20, .name = "John Smith", .password.text = "admin01299"};
    printf("\nperson: %d, %s,  %s", p2.age, p2.name, p2.password.text);

    return 0;
}