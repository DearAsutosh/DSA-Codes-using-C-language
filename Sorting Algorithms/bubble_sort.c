#include <stdio.h>
void swap(int *a, int *b) {
   *a=*a^*b;
   *b=*a^*b;
   *a=*a^*b;
}
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size ; ++i) {
        for (int j = 0; j < size - i ; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, size);

    printf("Sorted array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
