#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(){

    printf("begin\n");

    if(fork() != 0){
        printf("我是父进程, pid: %d, ppid: %d\n", getpid(), getppid());

        int i;
        for (int i = 0; i < 5; i++)
        {
            printf("i = %d, pid = %d\n", i, getpid());
            sleep(1);
        }
    }
    else
    {
        printf("我是子进程, pid: %d, ppid: %d\n", getpid(), getppid());

        int j;
        for (int j = 0; j < 5; j++)
        {
            printf("j = %d, pid = %d\n", j, getpid());
            sleep(1);
        }
    }

    return 0;
}