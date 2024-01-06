#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int front;
    int rear;
    int size;
    int *arr;
} circularqueue;
int insertion(circularqueue *kanha, int data)
{
    if ((kanha->rear + 1) % kanha->size == kanha->front)
    {
        printf("Queue is full. \n");
    }
    else
    {
        kanha->rear = (kanha->rear +1) % kanha->size;
        kanha->arr[kanha->rear] = data;
        printf("%d has successfully inserted in the queue .\n", data);
    }
}

void deletion(circularqueue *kanha)
{

    if (kanha->rear == kanha->front)
    {
        printf("Queue is Empty. \n");
    }
    else
    {
        kanha->front = (kanha->front + 1) % (kanha->size);
        int temp = kanha->arr[kanha->front];
        printf("%d has removed from the queue. \n",temp);
    }
}


void main()
{
    circularqueue kanha;
    kanha.front = kanha.rear = 0;
    printf("Enter the size of queue you want to create : \n");
    scanf("%d", &kanha.size);
    kanha.arr = (int *)malloc(kanha.size * (sizeof(int)));
    printf("The queue of size %d has created successfully . \n\n", kanha.size);

    insertion(&kanha, 15);
    insertion(&kanha, 8);
    insertion(&kanha, 3);
    insertion(&kanha, 1);
    insertion(&kanha, 19);
    insertion(&kanha, 16);
    deletion(&kanha);
    printf("The elements in the queue are :");
    for (int i = 0; i < kanha.size; i++)
    {
        printf("\t %d",kanha.arr[i]);
    }
}


