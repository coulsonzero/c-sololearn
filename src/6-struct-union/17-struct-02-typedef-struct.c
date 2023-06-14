#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;

typedef struct {
    float radius;
    point center;
} circle;

int main() {
    // method-1
    point p = {3, 4};
    circle c = {3.14, p};
    // method-2
    circle c2 = {4.5, {1, 3}};


    printf("radius: %.2f, center: (%d, %d)", c.radius, c.center.x, c.center.y);
    // radius: 3.14, center: (3, 4)

    return 0;
}

