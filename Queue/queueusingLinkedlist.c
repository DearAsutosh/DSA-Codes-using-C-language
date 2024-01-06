#include<stdio.h> 
#include<stdlib.h>
 typedef struct queueusingLinkedlist
 {
    int data;
   queue *Next; 
 }queue;
 
 void enqueue(queue *f, queue*r, int data){
     queue *n = (queue *)malloc(sizeof(queue));
     if (n==NULL)
     {
        printf("queue is full. \n");
     }
     else
     {
        n->data=data;
        n->Next=NULL;
     }
     
     
 }
void main () {
    queue  *front=NULL;
    queue *rear= NULL;
   

    // allocate memory in Heap

   
    second = (queue *)malloc(sizeof(queue));

    // link first and second nodes
    head->data = 7;
    head->Next = second;

    // link second and third nodes
    second->data = 11;
    second->Next = third;

     // link THIRD and FOURTH nodes
    third->data = 41;
    third->Next = fourth;


    // link third and Null nodes
    fourth->data = 66;
    fourth->Next = NULL;
}



