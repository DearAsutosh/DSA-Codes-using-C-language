#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void printLinkedlist(struct node *a)
{
    while (a != NULL)
    {
        printf("Element : %d \n", a->data);
        a = a->next;
    }
}
// case-1: insert at Beginning
// struct node * insertAtBegin( struct node *head, int element){
//     struct node *ptr=(struct node *) malloc (sizeof(struct node));
//     ptr->data=element;
//     ptr->next=head;
//     return ptr;
// }

// case-2: insert In Between
// struct node * insertInBetween( struct node *head, int element,int index){
//      struct node *ptr=(struct node *) malloc (sizeof(struct node));
//      struct node*p=head;int i=0;
//      while (i!=index-1)
//      {
//         p=p->next;
//         i++;
//      }
//      ptr->data=element;
// ptr->next=p->next;
//      p->next=ptr;
//      return head;
// }

// case-3 :Insert at the End

// struct node *InsertAtEnd(struct node *head, int element)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->data = element;
//     struct node *p = head;
//     while (p->next != NULL){
//     p = p->next;}
//     p->next = ptr;
//     ptr->next = NULL;
//     return head;
// }

// case-4 :Insert After an Existing Node

struct node *InsertAfterNode(struct node *head,struct node *prevNode,int element)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = element;
   ptr->next=prevNode->next;
   prevNode->next=ptr;
   return head;
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

    first->data = 8;
    first->next = second;

    second->data = 11;
    second->next = third;

    third->data = 20;
    third->next = NULL;

    printf("*** Before Insertion ***\n");
    printLinkedlist(head);
    
    printf("*** After Insertion ***\n");
    //  head=insertAtBegin(head, 15);
    // head = InsertAtEnd(head, 37);
    head=InsertAfterNode(head,first,56);

    printLinkedlist(head);
}