#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    pid_t pid = fork();

    if(pid > 0){
        while (1)
        {
            // 如果大于 0 ， 返回的是创建的子进程的进程号，当前是父进程
            printf("i am parent process, pid: %d, ppid: %d\n", getpid(), getppid());   
            sleep(1);     
        }   
    }else if (pid == 0)
    {
        // 当前是子进程
        printf("i am child process, pid: %d, ppid: %d\n", getpid(), getppid());

    }

    // for 循环
    for (int i = 0; i < 3; i++)
    {
        printf("i = %d, pid = %d\n", i, getpid());
    }
    return 0;
}
