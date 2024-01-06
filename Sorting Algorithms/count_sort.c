#include <stdio.h>
void printArray(int *arr,int n){
    printf("Elements in the array are :");
    for (int i = 0; i < n; i++)
    {
       printf(" %d \t",arr[i]);
    }
    printf("\n");
    
}
void countSort(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    int count[max + 1];
    for (int i = 0; i <= max; i++)
        count[i] = 0;

    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}
void main()
{
    int n;
    printf("Enter size of array you want to create :");
    scanf("%d",&n);
    int kanha[n];
    for (int i = 0; i < n; i++)
    {
       printf("Enter element %d : ",i+1);
       scanf("%d",&kanha[i]);
    }
    printArray(kanha,n);
    countSort(kanha,n);
    printArray(kanha,n);
    
}