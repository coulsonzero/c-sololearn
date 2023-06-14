#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main() {
    for (int k = 0; k < 40; k++) {
        fprintf(stderr, "%d: %s\n", k, strerror(errno++));
        // perror("Error");
        // errno++;
    }

    return 0;
}


/**
0: Undefined error: 0
1: Operation not permitted
2: No such file or directory
3: No such process
4: Interrupted system call
5: Input/output error
6: Device not configured
7: Argument list too long
8: Exec format error
9: Bad file descriptor
10: No child processes
11: Resource deadlock avoided
12: Cannot allocate memory
13: Permission denied
14: Bad address
15: Block device required
16: Resource busy
17: File exists
18: Cross-device link
19: Operation not supported by device
20: Not a directory
21: Is a directory
22: Invalid argument
23: Too many open files in system
24: Too many open files
25: Inappropriate ioctl for device
26: Text file busy
27: File too large
28: No space left on device
29: Illegal seek
30: Read-only file system
31: Too many links
32: Broken pipe
33: Numerical argument out of domain
34: Result too large
35: Resource temporarily unavailable
36: Operation now in progress
37: Operation already in progress
38: Socket operation on non-socket
39: Destination address required
 ...
*/