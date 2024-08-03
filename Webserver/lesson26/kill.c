/*
    #include <sys/types.h>
    #include <signal.h>

    int kill(pid_t pid, int sig);
        - 功能：给任何进程和进程组 pid，发送任何的信号 sig
        - 参数：
            - pid：
                > 0：将信号发送给指定的进程
                = 0：将信号发送给当前的进程组
                = -1：将信号发送给每一个有权限接收这个信号的进程
                < -1: 负数（-n）：表示将信号发送给进程组 ID 为 |n|（绝对值）的所有进程
            - sig：需要发送的信号的编号或者宏值，0 表示不发送任何信号

        kill(getppid(), 9);
        kill(getpid(), 9);

    int raise(int sig);
        - 功能：给当前进程发送信号
        - 参数：
            - sig：要发送的信号
        -返回值：
            - 成功 0
            - 失败 非0
        kill(getpid(), sig);

    void abort(void);
        - 功能：发送 SIGABRT 信号给当前的进程，杀死当前的进程
        - kill(getpid(), SIGABRT);
*/

#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    pid_t pid = fork();

    if(pid == 0){
        // 子进程
        int i = 0;
        for(i = 0; i < 5; i++){
            printf("child process\n");
            sleep(1);
        }
    }
    else if(pid > 0){
        // 父进程
        printf("parent process.\n");
        sleep(2);
        printf("kill child process now.\n");
        kill(pid, SIGINT);
    }

    return 0;
}
