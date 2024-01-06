// #include <stdio.h>

// void printArray(int *A, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }

// int partition(int A[], int low, int high)
// {
//     int pivot = A[low];
//     int i = low + 1;
//     int j = high;
//     int temp;

//     do
//     {
//         while (A[i] <= pivot)
//         {
//             i++;
//         }

//         while (A[j] > pivot)
//         {
//             j--;
//         }

//         if (i < j)
//         {
//             temp = A[i];
//             A[i] = A[j];
//             A[j] = temp;
//         }
//     } while (i < j);

//     // Swap A[low] and A[j]
//     temp = A[low];
//     A[low] = A[j];
//     A[j] = temp;
//     return j;
// }

// void quickSort(int A[], int low, int high)
// {
//     int partitionIndex; // Index of pivot after partition

//     if (low < high)
//     {
//         partitionIndex = partition(A, low, high); 
//         quickSort(A, low, partitionIndex - 1);  // sort left subarray 
//         quickSort(A, partitionIndex + 1, high); // sort right subarray
//     }
// }
// int main()
// {
   
//     int A[] = {27,10,36,18,25,45};
//       int size = 6;
//     printArray(A, size);
//     quickSort(A, 0, size - 1);
//     printArray(A, size);
//     return 0;
// }


#include <stdio.h>

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high], i = low - 1;

        for (int j = low; j < high; ++j)
            if (arr[j] <= pivot) {
                int temp = arr[++i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; scanf("%d", &arr[i++]));

    quickSort(arr, 0, size - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < size; printf("%d ", arr[i++]));

    return 0;
}
