/*
    #include <sys/types.h>
    #include <unistd.h>

    pid_t fork(void);
        函数的作用：用于创建子进程；
        返回值：
            fork()的返回值会返回两次。一次是在父进程，一次是在子进程中。
            在父进程中返回子进程的PID；
            在子进程中返回0
            如何区分父进程和子进程：通过fork()返回的值
            在父进程中返回-1：表示创建子进程失败，并且设置 errno
        
        父子进程之间的关系：
        区别：
            1.fork() 函数的返回值不同；
                父进程中： > 0 返回的是子进程的 ID
                子进程中： = 0
            2.pcb中的一些数据
                当前进程的pid
                当前进程的父进程的id：ppid
                信号集不一样
        
        共同点：
            某些状态下，子进程刚被创建出来，还没有执行任何写数据的操作
                - 用户区的数据
                - 文件描述符表

        父子进程对变量是不是共享的？
            - 刚开始的时候，是一样的，共享的。如果修改了数据，不共享了。
            - 读时共享（子进程被创建，两个进程没有做任何的写的操作），写时拷贝。
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 10;
    pid_t pid = fork();

    if(pid > 0){
        // 如果大于 0 ， 返回的是创建的子进程的进程号，当前是父进程
        printf("i am parent process, pid: %d, ppid: %d\n", getpid(), getppid());
        exit(0);
    }else if (pid == 0)
    {
        sleep(1);
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
