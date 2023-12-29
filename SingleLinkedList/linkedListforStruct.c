#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for the student record
struct Student {
    int id;
    char name[50];
    struct Student* next;
};

// Function prototypes
void insertFront(struct Student** head, int id, const char* name);
void displayList(struct Student* head);
void deleteNode(struct Student** head, int id);

int main() {
    struct Student* head = NULL;
    int choice, id;
    char name[50];

    do {
        // Display menu
        printf("\nLinked List Operations:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Display the linked list\n");
        printf("3. Delete a node\n");
        printf("0. Exit\n");

        // Get user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter student ID: ");
                scanf("%d", &id);
                printf("Enter student name: ");
                scanf("%s", name);
                insertFront(&head, id, name);
                break;

            case 2:
                displayList(head);
                break;

            case 3:
                printf("Enter the student ID to delete: ");
                scanf("%d", &id);
                deleteNode(&head, id);
                break;

            case 0:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }

    } while (choice != 0);

    // Free allocated memory before exiting
    struct Student* current = head;
    struct Student* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}

// Function to insert a node at the beginning of the linked list
void insertFront(struct Student** head, int id, const char* name) {
    struct Student* newNode = (struct Student*)malloc(sizeof(struct Student));
    newNode->id = id;
    strcpy(newNode->name, name);
    newNode->next = *head;
    *head = newNode;
    printf("Node inserted at the beginning.\n");
}

// Function to display the linked list
void displayList(struct Student* head) {
    printf("Linked List:\n");
    while (head != NULL) {
        printf("ID: %d, Name: %s\n", head->id, head->name);
        head = head->next;
    }
}

// Function to delete a node with a specific ID
void deleteNode(struct Student** head, int id) {
    struct Student* temp = *head;
    struct Student* prev = NULL;

    // If the node to be deleted is the head
    if (temp != NULL && temp->id == id) {
        *head = temp->next;
        free(temp);
        printf("Node with ID %d deleted.\n", id);
        return;
    }

    // Search for the node to be deleted
    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    // If the node is not present
    if (temp == NULL) {
        printf("Node with ID %d not found.\n", id);
        return;
    }

    // Unlink the node from the linked list
    prev->next = temp->next;

    // Free the memory of the deleted node
    free(temp);

    printf("Node with ID %d deleted.\n", id);
}
