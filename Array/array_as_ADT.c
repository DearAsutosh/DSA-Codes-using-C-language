#include <stdio.h>
#include <stdlib.h>
struct array
{
    int max_size;
    int used_size;
    int *ptr;
};
void createArray(struct array *a, int t_size, int u_size)
{
    a->max_size=t_size;
    a->used_size=u_size;
    a->ptr= (int *) malloc (t_size * sizeof(int));
}
void setValue(struct array *a){
     int i;
    for ( i =0; i < a->used_size; i++)
    {
        printf("Enter the value of element No.%d :\n",i+1);
        scanf("%d",&a->ptr[i]);
    }
    
}

void show(struct array *a) { int i;
    printf("\nThe value of elements of the Array are given below \n");
    for ( i =0; i < a->used_size; i++)
    {
        printf("\t%d\n",a->ptr[i]);
    }
}
void main()
{
    struct array marks;
    createArray(&marks,10,4);
    setValue(&marks);
    show(&marks);

}
