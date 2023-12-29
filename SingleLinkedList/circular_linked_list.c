#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void Traversal(struct node *head){
    struct node *ptr=head;   
    do{
        printf("Element =%d \n",ptr->data);
        ptr=ptr->next;
    }while(ptr != head) ;

}


void main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = first;
    first->data = 15;
    first->next = second;
    second->data = 26;
    second->next = third;
    third->data = 35;
    third->next = head;

    Traversal(head);
}