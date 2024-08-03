/*
    #include <sys/time.h>
    int setitimer(int which, const struct itimerval *new_value,
                     struct itimerval *old_value);
        - 功能：设置定时器（闹钟）。可以替代 alarm 函数。精度微秒us，可以实现周期性定时。
        - 参数：
            - which：定时器以什么时间定时
                ITIMER_REAL：真实时间，时间到达，发送 SIGALARM （常用）
                ITIMER_VIRTUAL：用户时间，时间到达，发送 SIGVTALRM
                ITIMER_PROF：以该进程在用户态和内核态下所消耗的时间来计算，时间到达，发送 SIGPROF
            
            - new_value：设置定时器的属性
                struct itimerval {              // 定时器的结构体
                struct timeval it_interval;     // 每个阶段的时间，间隔时间
                struct timeval it_value;        // 延迟多长时间执行定时器
                };

                struct timeval {                // 时间的结构体
                time_t      tv_sec;             // 秒数
                suseconds_t tv_usec;            // 微秒
                };

            - old_value：返回上一次的定时的时间参数，一般不使用，指定为 NULL，如果为 NULL，则不返回
        
        - 返回值：
            成功 0
            失败 -1 并设置错误号

*/

#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
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
