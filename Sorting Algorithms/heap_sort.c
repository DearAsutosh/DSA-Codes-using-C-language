#include <stdio.h>

#define SWAP(a, b) { int temp = a; a = b; b = temp; }

void heapify(int arr[], int n, int i) {
    int largest = i, l = 2 * i + 1, r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest]) largest = l;
    if (r < n && arr[r] > arr[largest]) largest = r;
    if (largest != i) { SWAP(arr[i], arr[largest]); heapify(arr, n, largest); }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--) { SWAP(arr[0], arr[i]); heapify(arr, i, 0); }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    heapSort(arr, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    return 0;
}
