#include<stdio.h>
#include<stdlib.h>
int main(){
//Two pointers for two different arrays
    int *p;
    int *q;

//declaring array at pointer p
    p = (int *)malloc(5*sizeof(int));
    p[0]=1;
    p[1]=3;
    p[2]=5;
    p[3]=7;
    p[4]=9;
 
//Printing the elements of p
    printf("Array p: \n");
    for(int i=0;i<5;i++){
        printf("%d \n",p[i]);
    }
//declaring array at pointer q
    q=(int *)malloc(7*sizeof(int));
    for(int i=0;i<5;i++){
        q[i]=p[i];//assigning elements of p to q
    }

    free(p);//releasing the memory held by pointer p

    p=q; //assigning the address held by q to p for the array
    q=NULL; //removing the address of array from q

//printing the elements of p
    printf("Array q converted to p: \n");
    for(int i=0;i<7;i++){
        printf("%d \n",p[i]);
    }

    return 0;
}