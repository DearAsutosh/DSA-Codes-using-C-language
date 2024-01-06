#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct Node { int data; struct Node* next; };

struct Node* hashTable[SIZE] = { NULL };

int hash(int key) { return key % SIZE; }

void insert(int key) {
    int index = hash(key);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = key; 
    newNode->next = hashTable[index];
    hashTable[index] = newNode;
}

void display() {
   
    for (int i = 0; i < SIZE; i++) {
        printf("Index %d: ", i);
        for (struct Node* current = hashTable[i]; current; current = current->next)
           { printf("%d -> ", current->data);}
        printf("NULL\n");
    }
}

int main() {
    int keys[] = {12, 5, 22, 7, 15, 3, 29, 40, 11, 8};
    int n=sizeof(keys) / sizeof(keys[0]);
    for (int i = 0; i < n; insert(keys[i++]));
    display();
    return 0;
}
