// 子进程发送数据给父进程，父进程读取到数据输出
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>

/*
    设置管道非阻塞
    int flags = fcntl(fd[0], F_GETFL); // 获取原来的flag，fnctl格式:       int fcntl(int fd, int cmd, ...);
    F_GETFL：获取文件的状态标志，如 O_NONBLOCK 或 O_ASYNC。
    flags |= O_NONBLOCK             // 修改 flag 的值为非阻塞状态
    fcntl(fd[0], F_SETFL, flags);   // 设置新的flag

*/

int main(){ 

    // 在 fork 之前创建管道
    int pipefd[2];
    int ret = pipe(pipefd);
    if(ret == -1){
        perror("pipe");
        exit(0);
    }

    // 创建子进程
    pid_t pid = fork();
    if(pid > 0){
        // 父进程
        printf("i am parent process, pid:%d\n", getgid());

        // 关闭写端
        close(pipefd[1]);

        // 从管道的读取端读取数据
        char buf[1024] = {0};

        int flags = fcntl(pipefd[0], F_GETFL); // 获取原来的flag，fnctl格式:       int fcntl(int fd, int cmd, ...);
        flags |= O_NONBLOCK;             // 修改 flag 的值为非阻塞状态
        fcntl(pipefd[0], F_SETFL, flags);   // 设置新的flag

        while (1)
        {
            int len = read(pipefd[0], buf, sizeof(buf));
            printf("len: %d\n", len);
            printf("parent recv : %s, pid : %d\n", buf, getpid());  
            memset(buf, 0, 1024);
            sleep(1);    

        }
    }
    else if(pid == 0){
        // sleep(1);
        // 子进程
        printf("i am child process, pid:%d\n", getgid());
        // 关闭读端
        close(pipefd[0]);

        char buf[1024] = {0};
        while (1)
        {
            // 向管道  中写入数据
            char * str = "hello, i am child";
            write(pipefd[1], str, strlen(str));
            sleep(5);
        }
    }




    return 0;
}