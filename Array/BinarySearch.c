// #include<stdio.h>
// int BinarySearch(int a[],int size,int element){
//     int low,mid,high;
//     low=0;
//     high=size-1;
    
//     while (low<=high)
//     {
//         mid=(low+high)/2;
//         if(a[mid]==element)
//     {
//        return mid;
//     }
//     if (a[mid]<element)
//     {
//         low=mid+1;
//     }
//     else{
//         high=mid-1;
//     }
   
//     }
//      return -1;
    
// }
// void main () {
//     int arr[] = {1,3,5,56,64,73,123,225,444};
//     int size = sizeof(arr)/sizeof(int);
//     int element = 73;
//     int searchIndex = BinarySearch(arr, size, element);
//     if (searchIndex==-1)
//     {
//         printf("\nI am sorry Babu !!!!\n");
//     }
//     else
//     printf("The element %d was found at index %d \n", element, searchIndex);
    
// }

#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) return mid;
        (arr[mid] < target) ? (low = mid + 1) : (high = mid - 1);
    }

    return -1;
}

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter sorted elements of the array:\n");
    for (int i = 0; i < size; ++i) scanf("%d", &arr[i]);

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    printf((result != -1) ? "Element %d found at index %d\n" : "Element %d not found in the array\n", target, result);

    return 0;
}