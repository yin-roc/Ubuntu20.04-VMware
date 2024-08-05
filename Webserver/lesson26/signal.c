/*
    #include <signal.h>
    typedef void (*sighandler_t)(int);
    sighandler_t signal(int signum, sighandler_t handler);
        - 功能：设置某个信号的捕捉行为
        - 参数：
            - signum：要捕捉的信号
            - handler：捕捉到的信号要如何处理
                - SIG_IGN：忽略信号
                - SIG_DFL：采用系统默认的处理函数
                - 回调函数：这个函数是内核调用，程序员只负责写，捕捉到信号后如何去处理信号。
                回调函数：
                    - 需要程序员去实现，提前准备好的，函数的类型根据实际需求，看函数指针的定义
                    - 不是程序员调用，而是当信号产生，由内核调用
                    - 函数指针是实现调用的手段，函数实现之后，将函数名放到函数指针的位置就可以了
        - 返回值：
            成功，返回上一次注册的信号处理函数的地址。第一次调用返回NULL
            失败，返回 SIG_ERR，设置错误号
    
    SIGKILL、SIGSTOP不能被捕捉，不能被忽略
*/

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/time.h>


void myalarm(int num){
    printf("捕捉到了信号的编号是：%d\n", num);
    printf("xxxxxxxxx\n");
}

// 过 3 秒以后，每隔 2 秒钟定时一次
int main(int argc, char *argv[])
{

    // 注册信号捕捉
    // signal(SIGALRM, SIG_IGN);
    // signal(SIGALRM, SIG_DFL);

    // void (*sighandler_t)(int);函数指针，int类型的参数表示捕捉到的信号的值。

    signal(SIGALRM, myalarm);

    struct itimerval new_value;

    // 设置间隔时间
    new_value.it_interval.tv_sec = 2;
    new_value.it_interval.tv_usec = 0;

    // 设置延迟的时间，3s之后开始第一次定时
    new_value.it_value.tv_sec = 3;
    new_value.it_value.tv_usec = 0;


    int ret = setitimer(ITIMER_REAL, &new_value, NULL);
    printf("定时器开始了...\n");

    if(ret == -1){
        perror("setitimer");
        exit(0);
    }
    
    getchar();


    return 0;
}

