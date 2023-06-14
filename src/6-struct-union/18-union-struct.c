#include <stdio.h>
#include <string.h>

// when union in struct: only use the typedef to define struct and union name was required at the end of the declaration.
// use the if statement to print the union value.
// a union can also contain a structure.


typedef struct {
    char make[20];
    int model_year;
    int id_type;
    union {
        int id_num;
        char VIN[20];
    } id ;
} vehicle;


int main() {
    vehicle car;
    strcpy(car.make, "Ford");
    car.model_year = 2017;
    car.id_type = 0;
    car.id.id_num = 123098;

    printf("Car: %s, %d, %d\n", car.make, car.model_year, car.id_type);
    // Car: Ford, 2017, 0
    car.id_type == 0 ? printf("ID: %d\n", car.id.id_num) : printf("ID: %s\n", car.id.VIN);
    // ID: 123098

    return 0;
}