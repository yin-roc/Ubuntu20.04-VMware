/*
    #include <sys/types.h>
    #include <sys/wait.h>
    pid_t wait(int *wstatus);
        功能：等待任意一个子进程结束，如果任意一个子进程结束了，此函数会回收子进程
        参数：int *wstatus
            进程退出时的状态信息，传入的是一个 int 类型的地址，传出参数。
        返回值：
            - 成功：返回被回收的子进程的id
            - 失败：-1（所有的子进程都结束，调用函数失败） 
    
    调用 wait 函数的进程会被挂起（阻塞），直到它的一个子进程退出或者收到一个不能被忽略的信号时才能被唤醒（相当于继续往下执行）
    如果没有子进程，函数会立刻返回，返回 -1；如果子进程都已经结束了，也会立即返回，返回 -1。

*/  

#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // 有一个父进程，创建五个子进程
    pid_t pid;

    for (int i = 0; i < 5; i++)
    {
        pid = fork();

        // 限制子进程循环创建子进程
        if(pid == 0){
            break;
        }
    }

    if (pid > 0)
    {
        // 父进程
        while (1)
        {
            printf("parent, pid = %d\n", getpid());

            // int ret = wait(NULL);
            int st;
            int ret = wait(&st);
            if (ret == -1)
            {
                break;
            }
            
            if(WIFEXITED(st)){
                // 是不是正常退出
                printf("退出的状态：%d", WEXITSTATUS(st));
            }
            if(WIFSIGNALED(st)){
                // 是不是异常终止
                printf("被哪个信号干掉：%d", WTERMSIG(st));
            }


            printf("child die, pid = %d\n", ret);

            sleep(1);
        }  
    }
    else if (pid == 0){
        while (1)
        {
            // 子进程
            printf("child, pid = %d\n", getpid());     
            sleep(1);   
        }

        exit(0);
    }
    

    return 0;
}
