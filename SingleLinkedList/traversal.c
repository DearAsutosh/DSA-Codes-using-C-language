#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
};

void linkedlistTraversal(struct Node *a)
{
    while (a != NULL)
    {
        printf("Element :%d\n", a->data);
        a = a->Next;
    }
}

void main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // allocate memory in Heap

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

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
    linkedlistTraversal(head);
}