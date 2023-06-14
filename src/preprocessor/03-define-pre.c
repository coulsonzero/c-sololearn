#include <stdio.h>
#include <string.h>

int main() {
    // char curr_time[10], curr_date[12];
    // strcpy(curr_time, __TIME__);
    // strcpy(curr_date, __DATE__);
    // printf("%s %s\n", curr_time, curr_date);
    printf("%s %s\n", __TIME__, __DATE__);
    printf("This is a line %d\n", __LINE__);
    printf("File Name: %s\n", __FILE_NAME__);

    // int std_c;
    // std_c = __STDC__;
    // printf("STDC is %d\n", std_c);
    printf("STDC is %d\n", __STDC__);

    return 0;
}

/**
 * 15:29:57 Jun 14 2023
 * This is a line 11
 * STDC is 1
 */