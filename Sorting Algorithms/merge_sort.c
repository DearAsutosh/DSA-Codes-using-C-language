// #include <stdio.h>

// void merge(int arr[], int l, int m, int r) {
//     int i, j, k;
//     int n1 = m - l+1 ;
//     int n2 = r - m;

//     int L[n1], R[n2];

//     // Copy data to temporary arrays L[] and R[]
//     for (i = 0; i < n1; i++)
//         L[i] = arr[l + i];
//     for (j = 0; j < n2; j++)
//         R[j] = arr[m + 1 + j];

//     // Merge the temporary arrays back into arr[l..r]
//     i = 0;
//     j = 0;
//     k = l;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     // Copy the remaining elements of L[], if there are any
//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     // Copy the remaining elements of R[], if there are any
//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(int arr[], int l, int r) {
//     if (l < r) {
//         // Same as (l+r)/2, but avoids overflow for large l and r
//         int m = l + (r - l) / 2;

//         // Sort first and second halves
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);

//         // Merge the sorted halves
//         merge(arr, l, m, r);
//     }
// }
// void printArray(int *arr, int size)
// {
//     printf("Elements in the array are : ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("\t%d", arr[i]);
//     }
//     printf("\n");
// }
// int main() {
//     int n ;
//     printf("Enter the size of array you want : ");
//     scanf("%d",&n);
//     int kanha[n]; 
//     for (int i = 0; i < n; i++)
//     {
//        printf("Enter element %d :",i+1);
//        scanf("%d",&kanha[i]);
//        printf("\n");
//     }
//     printArray(kanha,n);
//     mergeSort(kanha,0,n-1);
//     printArray(kanha,n);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1, n2 = right - mid, i, j, k;

    int *L = malloc(n1 * sizeof(int)), *R = malloc(n2 * sizeof(int));

    for (i = 0; i < n1; L[i] = arr[left + i++]);
    for (j = 0; j < n2; R[j] = arr[mid + 1 + j++]);

    for (i = 0, j = 0, k = left; i < n1 && j < n2; arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++]);

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    free(L);
    free(R);
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; scanf("%d", &arr[i++]));

    mergeSort(arr, 0, size - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < size; printf("%d ", arr[i++]));

    return 0;
}
