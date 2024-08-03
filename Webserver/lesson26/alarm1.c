// 1s 电脑能数多少个数

/*
    实际的时间 = 内核时间 + 用户时间 + 消耗的时间
    进行文件 IO 操作的时候比较浪费时间

    定时器，与进程的状态无关（自然定时法）， 无论进程处于什么状态，alarm都会计时
*/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    alarm(1);

    int i = 0;
    while (1)
    {
        printf("%d\n", i++);
    }
    
    return 0;
}
