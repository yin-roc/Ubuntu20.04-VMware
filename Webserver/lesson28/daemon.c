/*
    写一个守护进程，每隔 2s 获取一下系统时间，将这个时间写入磁盘文件中

    守护进程的创建步骤：
        1.执行一个 fork()，之后父进程退出，子进程继续执行。
        2.子进程调用 setsid() 开启一个新会话。
        3.清除进程的 umask 以确保当守护进程创建文件和目录时拥有所需的权限。
        4.修改进程的当前工作目录，通常会改为根目录（/）。
        5.关闭守护进程从其父进程继承而来的所有打开着的文件描述符。
        6.在关闭了文件描述符0、 1、 2之后，守护进程通常会打开/dev/null 并使用dup2()
        7.使所有这些描述符指向这个设备。
        8.核心业务逻辑
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/time.h>
#include <signal.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void work(int num){
    time_t tm = time(NULL);
    struct tm *loc = localtime(&tm);
    char buf[1024];

    // sprintf(buf, "%d-%d-%d %d:%d:%d\n", loc->tm_year, loc->tm_mon, loc->tm_mday, loc->tm_hour, loc->tm_min, loc->tm_sec);
    // printf("%s\n", buf);

    char * str = asctime(loc);
    int fd = open("time.txt", O_CREAT | O_RDWR | O_APPEND, 0664);
    write(fd, str, strlen(str));
    close(fd);
}

int main(int argc, char const *argv[])
{

    // 1.执行一个 fork()，之后父进程退出，子进程继续执行。
    pid_t pid = fork();
    if(pid > 0)
        exit(0);

    // 2.子进程调用 setsid() 开启一个新会话。
    setsid();

    // 3.清除进程的 umask 以确保当守护进程创建文件和目录时拥有所需的权限。
    umask(022);

    // 4.修改进程的当前工作目录，通常会改为根目录（/）。
    chdir("/home/yin-roc/1-Github/Ubuntu20.04-VMware/Webserver/lesson28");

    // 5.关闭、重定向文件描述符
    int fd = open("/dev/null", O_RDWR);
    dup2(fd, STDIN_FILENO);
    dup2(fd, STDOUT_FILENO);
    dup2(fd, STDERR_FILENO);

    // 6.核心业务逻辑

    // 捕捉定时信号
    struct sigaction act;
    act.sa_handler = work;
    act.sa_flags = 0;
    sigemptyset(&act.sa_mask);
    sigaction(SIGALRM, &act, NULL);
    
    
    sigaction(SIGALRM, &act, NULL);

    // 创建定时器
    struct itimerval val;
    val.it_interval.tv_sec = 2;
    val.it_interval.tv_usec = 0;
    val.it_value.tv_sec = 2;
    val.it_value.tv_usec = 0;
    setitimer(ITIMER_REAL, &val, NULL);

    while (1)
    {
        sleep(10);
    }
    
    return 0;

}
