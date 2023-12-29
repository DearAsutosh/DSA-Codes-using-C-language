#include <stdio.h>

// Function to print the elements of an array
void printArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at a specified position in the array
void insertElement(int arr[], int *size, int position, int element) {
    if (position < 0 || position > *size) {
        printf("Invalid position for insertion\n");
        return;
    }

    // Shift elements to make space for the new element
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = element;

    // Increment the size of the array
    (*size)++;

    printf("Element %d inserted at position %d\n", element, position);
}

// Function to update an element at a specified position in the array
void updateElement(int arr[], int size, int position, int newElement) {
    if (position < 0 || position >= size) {
        printf("Invalid position for updating\n");
        return;
    }

    // Update the element at the specified position
    arr[position] = newElement;

    printf("Element at position %d updated to %d\n", position, newElement);
}

// Function to delete an element at a specified position in the array
void deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position for deletion\n");
        return;
    }

    // Shift elements to fill the gap left by the deleted element
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    (*size)--;

    printf("Element at position %d deleted\n", position);
}

int main() {
   
    int size = 5;
    int arr[size] ;
    
    for (int i = 0; i < size; i++)
    {
        printf("Enter arr[%d] : \n",i);
        scanf("%d",&arr[i]);
    }
    
    // Print the initial array
    printArray(arr, size);

    // Insert an element at position 2
    insertElement(arr, &size, 2, 10);
    printArray(arr, size);

    // Update the element at position 3
    updateElement(arr, size, 3, 20);
    printArray(arr, size);

    // Delete the element at position 4
    deleteElement(arr, &size, 4);
    printArray(arr, size);

    return 0;
}
