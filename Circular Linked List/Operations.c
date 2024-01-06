#include <stdio.h>
#include <stdlib.h>

// Node structure for a circular double-linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the list
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        return newNode;
    } else {
        newNode->next = head;
        newNode->prev = head->prev;
        head->prev->next = newNode;
        head->prev = newNode;
        return newNode;
    }
}

// Function to insert a node at the end of the list
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        return newNode;
    } else {
        newNode->next = head;
        newNode->prev = head->prev;
        head->prev->next = newNode;
        head->prev = newNode;
        return head;
    }
}

// Function to delete a node by value
struct Node* deleteNode(struct Node* head, int data) {
    if (head == NULL) {
        printf("List is empty, cannot delete.\n");
        return NULL;
    }

    struct Node* current = head;

    do {
        if (current->data == data) {
            if (current->next == current) {
                // Single node in the list
                free(current);
                return NULL;
            } else {
                current->prev->next = current->next;
                current->next->prev = current->prev;
                if (head == current) {
                    // If deleting the head, move head to the next node
                    head = current->next;
                }
                free(current);
                return head;
            }
        }
        current = current->next;
    } while (current != head);

    printf("Node with value %d not found.\n", data);
    return head;
}

// Function to display the elements of the list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* current = head;

    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);

    printf("\n");
}

// Function to free the memory allocated for the list
void freeList(struct Node* head) {
    if (head == NULL) {
        return;
    }

    struct Node* current = head;
    struct Node* temp;

    do {
        temp = current;
        current = current->next;
        free(temp);
    } while (current != head);
}

int main() {
    struct Node* head = NULL;

    head = insertAtBeginning(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtBeginning(head, 0);

    displayList(head);

    head = deleteNode(head, 2);

    displayList(head);

    freeList(head);

    return 0;
}
