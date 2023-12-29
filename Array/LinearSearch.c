// #include <stdio.h>
// void linearSearch(int a[], int size, int element)
// {
//     int flag = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (a[i] == element)
//         {
//             flag = 1;
//         }
//     }
//     if (flag == 1)
//     {
//         printf("\nHaan Meri Jaan !!!\nItem found !!! " );
//     }
//     else
//     {
//         printf("\nSorry Meri Jaan !!!\nI couldn't found that Bull Shit Element.\n");
//     }

// }
// void main()
// {
//     int arr[] = {5, 6, 8, 9, 10};
//     linearSearch(arr, 5, 9);
// }

#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; // Element found, return index
        }
    }
    return -1; // Element not found
}

int main() {
    int size, target ;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target);

    printf((result != -1) ? "Element %d found at index %d\n" : "Element %d not found in the array\n", target, result);

    return 0;
}


