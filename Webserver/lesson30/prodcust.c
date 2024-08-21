/*
    生产者消费者模型（粗略的版本）
*/

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>


// 创建一个互斥量
pthread_mutex_t mutex;

struct Node
{
    int num;
    struct Node* next;
};

// 头结点
struct Node* head = NULL;

void* producer(void *arg){
    // 不断地创建新的节点，添加到链表中
    while (1)
    {
        pthread_mutex_lock(&mutex);
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->next = head;
        head = newNode;
        head->num = rand() % 1000;
        printf("add node, num: %d, tid : %ld\n", newNode->num, pthread_self());
        pthread_mutex_unlock(&mutex);
        usleep(100);
    }
    
    return NULL;
}

void* consumer(void *arg){
    while (1)
    {
        pthread_mutex_lock(&mutex);
        // 保存头结点的指针
        struct Node* tmp = head;

        // 判断是否有数据
        if(head != NULL){
            // 有数据
            head = head->next;
            printf("del node, num: %d, tid : %ld\n", tmp->num, pthread_self());
            free(tmp);
            pthread_mutex_unlock(&mutex);
            usleep(100);
        }
        else{
            // 没有数据
            pthread_mutex_unlock(&mutex);
        }
    }
    
    return NULL;
}

int main(int argc, char *argv[])
{
    pthread_mutex_init(&mutex, NULL);

    // 创建5个生产者线程，和5个消费者线程
    pthread_t ptids[3], ctids[5];
    
    for (int i = 0; i < 5; i++)
    {
        pthread_create(&ptids[i], NULL, producer, NULL);
        pthread_create(&ctids[i], NULL, consumer, NULL);
    }

    for (int i = 0; i < 5; i++)
    {
        pthread_detach(ptids[i]);
        pthread_detach(ctids[i]);
    }


    sleep(10);
    pthread_exit(NULL);

    return 0;
}
