#include <stdio.h>


typedef struct {
    int x;
    int y;
} point;



int main() {
    point p[3] = {{1, 2}, {4, 3}, {6, 4}};
    for(int i = 0; i < 3; i++) {
        printf("point %d area: %d\n", i, p[i].x * p[i].y);
    }

    return 0;
}

/*
point 0 area: 2
point 1 area: 12
point 2 area: 24
 */