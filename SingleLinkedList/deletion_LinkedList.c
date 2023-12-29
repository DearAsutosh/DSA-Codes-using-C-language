#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void Traverse_LinkedList(struct node *head)

{
    while (head != NULL)
    {
        printf("Element : %d\n", head->data);
        head = head->next;
    }
}
// // case-1: Delete first element of linked list
// struct node *Delete_element_first(struct node *head){
//     struct node *ptr=head;
//     ptr=(struct node *) malloc(sizeof(struct node));
//     head=head->next;
//     free(ptr);
//     printf("After Deletion first element :\n");
//     return head;
// }

// case-2 :Delete at some index in between
// struct node *delete_in_between(struct node *a, int index){
//     struct node *p=a;
//     struct node *q=a->next;

//     for (int i = 0; i < index-1; i++)
//     {
//         p=p->next;
//         q=q->next;
//     }
//     p->next=q->next;
//     free(q);
//       printf("\nAfter Deletion %dth element :\n",index);
//     return a;

// }

// case-3 :Delete at End
// struct node *delete_at_end(struct node *a)
// {
//     struct node *p = a;
//     struct node *q = a->next;

//     while (q->next != NULL)

//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = NULL;
//     free(q);
//     printf("\nAfter Deletion at end  :\n");
//     return a;
// }

//  case-4 :Delete any existing value from linked list 
struct node *delete_any_value(struct node *a, int value){
    struct node *p=a;
    struct node *q=a->next;

    while (q->data != value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if (q->data == value)
    {
        p->next=q->next;free(q);
    }
    printf("\nAfter Deletion of %d  :\n",value);
    return a;

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
    third->next = NULL;

    Traverse_LinkedList(head);
    // head=Delete_element_first(head);
    // head=delete_in_between( head, 2);
    // head = delete_at_end(head);
    head=delete_any_value(head,26);

    Traverse_LinkedList(head);
}