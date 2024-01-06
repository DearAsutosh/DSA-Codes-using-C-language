//  ------------> BUBBLE SORT




// #include <stdio.h>
// void printArray(int *arr, int size)
// {
//     printf("Elements in the array are : ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("\t%d", arr[i]);
//     }
//     printf("\n");
// }
// void BubbleSort(int *arr, int size)
// {
//     int isSorted = 1;
//   ;
//     for (int i = 0; i < size-1; i++) // for counting passes
//     {

//          printf("Processing pass no.%d...\n", i+1);
//         for (int j = 0; j < size - i - 1; j++) // for counting comparisons
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 arr[j] = arr[j] ^ arr[j + 1];
//                 arr[j + 1] = arr[j] ^ arr[j + 1];
//                 arr[j] = arr[j] ^ arr[j + 1];
//                 isSorted = 0;
//             }
//         }
//     }
//     if (isSorted)
//     {
//         return;
//     }
// }
// void main()
// {
//     int size;
//     printf("Enter the size of the array you want : ");
//     scanf("%d", &size);
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter the element no. %d :", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     printArray(arr, size);
//     BubbleSort(arr, size);
//     printf("*** After Bubble sorting ***\n");
//     printArray(arr, size);
// }







//---------> INSERTION SORT






// #include <stdio.h>
// void printArray(int kanha[], int size)
// {
//     printf("The elements in the array are : ");

//     for (int i = 0; i < size; i++)
//     {
//         printf("\t%d", kanha[i]);
//     }
//     printf("\n");
// }
// void InsertinSort(int kanha[], int size)
// {
//     for (int i = 1; i < size; i++)
//     {
//         int key = kanha[i];
//         int j = i - 1;
//         while (j >= 0 && kanha[j] > key)
//         {
//             kanha[j + 1] = kanha[j];
//             j--;
//             kanha[j + 1] = key;
//         }
//     }
// }
// void main()
// {
//     int size;
//     printf("Enter the size of the array you want : ");
//     scanf("%d", &size);
//     int kanha[size];
//     for (int i = 0; i < size; i++)
//     {
//         printf("\n Enter element no.%d :", i + 1);
//         scanf("%d", &kanha[i]);
//     }
//     printArray(kanha, size);
//     InsertinSort(kanha, size);
//     printArray(kanha, size);
// }





//--------> SELECTION SORT






#include<stdio.h>
void PrintArray(int arr[],int n) {
	for(int i=0; i<n; i++) {
		printf("\t%d",arr[i]);
	}
	printf("\n");
}
void SelectionSort(int *arr,int size){
	int temp,indexofmin;
	printf("After Selection Sort :-\n");
	for(int i=0;i<size-1;i++){
		indexofmin=i;
		for(int j=i+1; j<size; j++){
			if(arr[j] < arr[indexofmin]){
				indexofmin=j;
			}
		}
	temp=arr[i];
	arr[i]=arr[indexofmin];
	arr[indexofmin]=temp;	
	}
	}

void main() {
	int n;
	printf("Enter the size of the array you want :");
	scanf("%d",&n);
	int kanha[n];
	for(int i=0;i<n;i++){
		printf("Enter element no.%d :",i+1);
		scanf("%d",&kanha[i]);
	}
	PrintArray(kanha,n);
	SelectionSort(kanha,n);
	PrintArray(kanha,n);
}











