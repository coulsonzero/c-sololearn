#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <math.h>

extern int errno;

void error_check(double res);

int main() {
    error_check(sqrt(-5));      // nan

    errno = 0;
    error_check(exp(1000));     // inf

    return 0;
}

void error_check(double res) {
    if (errno == 0) printf("%f\n", res);
    else if (errno == ERANGE || errno == EDOM) fprintf(stderr, "%s\n", strerror(errno));
}