// #include <stdio.h>
// void PrintArray(int arr[], int size)
// {
//     printf("The elements in the array are : ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("\t%d", arr[i]);
//     }
//     printf("\n");
// }
// void SelectionSort(int arr[], int size)
// {
//     int IndexofMin, temp;
//     printf("Running Selection Sort...\n");
//     for (int i = 0; i < size - 1; i++)
//     {
//         printf("Processing pass %d ...\n", i + 1);
//         IndexofMin = i;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[j] < arr[IndexofMin])
//             {
//                 IndexofMin = j;
//             }
//         }
//         temp = arr[i];
//         arr[i] = arr[IndexofMin];
//         arr[IndexofMin] = temp;
//     }
// }
// void main()
// {
//     int size;
//     printf("Enter the size of the array : ");
//     scanf("%d", &size);
//     int kanha[size];
//     for (int i = 0; i < size; i++)
//     {
//         printf("\n Enter the element no.%d :", i + 1);
//         scanf("%d", &kanha[i]);
//     }
//     PrintArray(kanha, size);
//     // SelectionSort(kanha, size);
//     SelectionSort(kanha, size);
//     PrintArray(kanha, size);
// }

#include <stdio.h>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size ; ++i) {
        // int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[i]) {
                // Swap without a separate function
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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
    for (int i = 0; i < size; scanf("%d", &arr[i++]));

    selectionSort(arr, size);

    printf("Sorted array:\n");
    for (int i = 0; i < size; printf("%d ", arr[i++]));

    return 0;
}
