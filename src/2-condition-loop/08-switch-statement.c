#include <stdio.h>

int main() {
    int day = 3;
    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("work day\n");
            break;  // 无break则不再判断case条件，继续执行之后的所有statements，
        case 6:
            printf("sat\n");
            break;
        case 7:
            printf("sun\n");
            break;
        default:
            printf("no valid\n");
    }

    return 0;
}