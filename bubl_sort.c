///implementing bubble sort on own //

#include<stdio.h>
void bubble_swap(int *x,int *y);
int main ()
{   
    // Getting the boundary as domain //
    printf("Enter a number upto which you want the sorting ? ");

    int size;
    scanf("%d",&size);

    int arr[size]; // declearing the array of size //

    // Now getting the array elements from the user //
    printf("Enter the numbers elements of the array ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Thinking the sorting agorithm //
     
     
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[i]>arr[i+1])
            {
                bubble_swap(&arr[i],&arr[i+1]);
            }

        }
    }
    printf("The sorted array is -----");

    for(int i=0;i<size;i++)
    {
        printf("%d\t ",arr[i]);

    }


    return 0;
}

void bubble_swap(int * x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

    return;
}