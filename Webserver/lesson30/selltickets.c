/*
    使用多线程实现买票的案例。
    有 3 个窗口，一共是100张票
*/


#include <stdio.h>
#include <pthread.h>
#include <unistd.h>


int tickets = 100;
void* sellticket(void *arg){
    // 卖票
    // int tickets = 100;   // 这样会导致每个线程卖100张票，而不是三个线程一起卖100张票
    while (tickets > 0)
    {
        usleep(6000);
        printf("%ld 正在卖第 %d 张门票\n", pthread_self(), tickets);
        tickets--;
    }
    return NULL;
}

int main(int argc, char *argv[])
{
    // 创建 3 个子线程
    pthread_t tid1, tid2, tid3;
    pthread_create(&tid1, NULL, sellticket, NULL);
    pthread_create(&tid2, NULL, sellticket, NULL);
    pthread_create(&tid3, NULL, sellticket, NULL);

    // 回收子线程的资源，阻塞
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    pthread_join(tid3, NULL);

    // // 设置线程分离
    // pthread_detach(tid1);
    // pthread_detach(tid2);
    // pthread_detach(tid3);

    pthread_exit(NULL);     // 退出主线程


    return 0;
}
