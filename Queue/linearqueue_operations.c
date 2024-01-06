#include <stdio.h>
#include <stdlib.h>


typedef struct queue
{
    int front;
    int rear;
    int size;
    int *arr;
} queue;

void insertion(queue *kanha, int data)
{
    if (kanha->rear == kanha->size - 1)
    {
        printf("Queue is full. \n");
    }
    else
    {
        kanha->rear++;
        kanha->arr[kanha->rear] = data;
        printf("%d has successfully inserted in the queue .\n", data);
    }
}

void deletion(queue *kanha)
{
    if (kanha->rear == kanha->front )
    {
        printf("Queue is Empty. \n");
    }
   
    else
    {
        kanha->front++;
        int temp = kanha->arr[kanha->front];
         printf("%d has successfully removed from the queue. \n", temp);
    }
}
void traversalQueue(queue *kanha){
    printf("The elements in the queue are :");
    for (int i = 0; i < kanha->size; i++)
    {
        printf("\t %d",kanha->arr[i]);
    }
    
}

void main()
{
    queue kanha;
    kanha.front=kanha.rear=-1;
    printf("Enter the size of queue you want to create : \n");
    scanf("%d",&kanha.size);
    kanha.arr=(int *)malloc(kanha.size*(sizeof(int)));
    printf("The queue of size %d has created successfully . \n\n",kanha.size);

    insertion(&kanha, 15);
    insertion(&kanha, 7);
    insertion(&kanha, 9);
    deletion(&kanha);
    traversalQueue(&kanha,kanha.size);
    }