/*
    #include <stdlib.h>
    void exit(int status); 

    #include <unistd.h>
    void _exit(int status);

    status参数：是进程退出时的一个状态信息。父进程回收子进程资源的时候可以获取到。

*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    printf("hello\n");
    printf("world");

    // \n 相当于刷新 IO 缓冲
    // exit(0); // 输出: hello\nworld
    _exit(0);   // 输出：hello
    
    return 0;
}
