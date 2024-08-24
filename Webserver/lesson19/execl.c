/*
    #include <unistd.h>

    int execl(const char *pathname, const char *arg, ...);
        - 参数：
            - path: 需要指定的执行的文件的路径或名称
                a.out: 绝对路径或相对路径
            -arg: 是可执行文件所需的参数列表
                第一个参数一般没有什么作用，为了方便，一般写的是可执行程序的名称
                第二个参数开始往后，就是程序执行所需要的参数列表
                参数最后需要以 NULL 结束（哨兵）
        
        - 返回值：
            只有调用失败，才会有返回值，返回 -1，并且设置errno
            如果调用成功，没有返回值。

*/

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(){
    // 创建一个子进程，在子进程中执行 exec 函数簇中的函数
    pid_t pid = fork();

    if(pid > 0){
        // 父进程
        printf("i am parent process, pid: %d\n", getpid());
        sleep(1);
    }
    else if(pid == 0){
        // 子进程
        // execl("hello", "hello", NULL);
        execl("/bin/ps", "ps", "aux", NULL);

        printf("i am child process, pid: %d\n", getpid());
    }

    for(int i = 0; i < 3; i++){
        printf("i = %d, pid = %d\n", i, getpid());
    }
    
    return 0;
}