/*
    #include <unistd.h>
	long fpathconf(int fd, int name);
        功能：通常用于获取与文件或设备相关的动态系统限制或属性，这些属性可能会影响程序的行为。
        参数：
            fd：文件描述符，指向一个打开的文件、目录或管道等。
            name：表示要查询的系统限制或属性的标识符，如 _PC_PIPE_BUF（管道缓冲区大小）。
        返回值：
            成功：返回指定的系统限制或属性值。
            失败：返回 -1，并设置 errno 以指示错误原因。
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int pipefd[2];

    int ret = pipe(pipefd);

    long size = fpathconf(pipefd[0], _PC_PIPE_BUF);
    printf("pipe size: %ld\n", size);

    return 0;
}
