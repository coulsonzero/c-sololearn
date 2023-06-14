#include <stdio.h>

int global_var;     // 全局变量
extern int errno;   // 扩展变量

int main() {
    int local_var = 0;          // 局部变量
    static int static_var = 0;  // 静态局部变量
    auto int auto_var = 0;      // 自动局部变量
    register int x;             // 寄存器变量(变量使用频率较高，放在机器寄存器中可以使程序更小、执行速度更快)

    printf("%d\n", global_var);
    printf("%d\n", local_var);
    printf("%d\n", static_var);
    printf("%d\n", auto_var);
    printf("%d\n", errno);


    return 0;
}