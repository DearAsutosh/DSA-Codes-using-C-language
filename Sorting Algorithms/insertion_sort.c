#include<stdio.h>
void printArray(int *arr, int size)
{
    printf("Elements in the array are : ");
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\n");
}
void InsertionSort(int a[],int n){
        for (int i = 1; i < n; i++)
        {
            //loop for each pass
            int key=a[i];
            int j=i-1;
    while (j>=0 && a[j] > key)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
        }
        
}
void main () 
    {
        int arr[]={12,54,65,7,23,9};
      int n = sizeof(arr) / sizeof(arr[0]);
        printArray(arr,n);
        InsertionSort(arr,n);
        printArray(arr,n);

    }