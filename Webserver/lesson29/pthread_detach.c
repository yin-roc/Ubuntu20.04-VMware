/*
    #include <pthread.h>
    int pthread_detach(pthread_t thread);
        - 功能：分离一个线程。被分离的线程在终止的时候，会自动释放资源返回给系统。
            1.不能多次分离，会产生不可预料的行为；
            2.不能去连接一个已经分离的线程，会报错；
        - 参数：需要分离的线程的 ID
        - 返回值：
            成功：返回 0
            失败：返回错误号    
*/

#include <stdio.h>
#include <pthread.h>
#include <string.h>

void* callback(void * arg){
    printf("child thread id : %ld\n", pthread_self());
    return NULL;
}


int main(int argc, char *argv[])
{
    // 创建一个子线程
    pthread_t tid;
    int ret = pthread_create(&tid, NULL, callback, NULL);

    if(ret != 0){
        char * errstr = strerror(ret);  // strerror()将错误号转换成字符串信息输出
        printf("error1 : %s\n", errstr);
    }

    // 输出主线程和子线程的 ID
    printf("tid: %ld, main thread id : %ld\n", tid, pthread_self());

    // 设置子线程分离，子线程分离后，子线程结束时对应的资源就不需要主线程释放
    ret = pthread_detach(tid);
    if(ret != 0){
        char *errstr = strerror(ret);
        printf("error2: %s\n", errstr);
    }

    // 设置分离后，对分离的子线程进行连接 pthread_join()
    // 会输出 error3: Invalid argument，原因是 pthread_detach 函数用于将线程设置为不可连接（detached）状态
    // 如果再次 pthread_join 的话会出现 ret 为 EINVAL 的情况。
    ret = pthread_join(tid, NULL); 
    if(ret != 0){
        char *errstr = strerror(ret);
        printf("error3: %s\n", errstr);
    }

    pthread_exit(NULL);
    return 0;
}
