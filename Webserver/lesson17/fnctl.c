/*
    #include <unistd.h>
    #include <fcntl.h>
    int fcntl(int fd, int cmd, ...);
        参数：
            fd：表示需要操作的文件描述符
            cmd： 表示对文件描述符进行如何操作
                - F_DUPFD: 复制文件描述符，赋值的是第一个参数 fd，得到一个新的文件描述符（返回值）
                    int ret = fcntl(fd, F_DUPFD);

                - F_GETFL: 获取指定的文件描述符文件状态 flag
                    获取的 flag 和我们通过 open 函数传递的 flag 是同一个东西

                - F_SETFL:  设置文件描述符文件状态 flag
                    必选项：O_RDONLY, O_WRONLY, O_RDWR 不可以被修改
                    可选项：O_APPEND, O_NONBLOCK
                        O_APPEND：表示追加数据
                        O_NONBLOCK：设置成非阻塞

            阻塞和非阻塞：描述的是函数调用的行为。

*/

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // 1.复制文件
    // int fd = open("1.txt", O_RDONLY);
    // int ret = fcntl(fd, F_DUPFD);


    // 2.修改或者获取文件状态
    int fd = open("1.txt", O_RDWR);
    if(fd == -1){
        perror("open");
        return -1;
    }

    // 获取文件描述符状态 flag
    int flag = fcntl(fd, F_GETFL);
    if(flag == -1){
        perror("fnctl");
        return -1;
    }

    flag |= O_APPEND;   // flag = flag | O_APPEND;

    // 修改文件描述符状态的 flag，给flag加入O_APPEND这个标记
    int ret = fcntl(fd, F_SETFL, flag);
    if(fd == -1){
        perror("fnctl");
        return -1;
    }

    const char* str = "nihao";
    write(fd, str, strlen(str));

    close(fd);
    return 0; 
}
