/****************
Implement the Selection Sort, Bubble Sort and Insertion
algorithms on a set of 25 numbers. (Refer Figures 13.4 (a), 13.4
13.4 (c) for the logic of the algorithms)
- Selection sort
***********************/
#include<stdio.h>
void swap(int *x,int *y);
int main ()
{   
    // Getting the boundary as domain //
    printf("Enter a number upto which you want the sorting ? ");

    int n;
    scanf("%d",&n);

    int arr[n]; // declearing the array of size n //

    // Now getting the array elements from the user //
    printf("Enter the numbers\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int smallest = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[smallest] > arr[j])
            {
                smallest = j;
            }
        }

        swap(&arr[i], &arr[smallest]);
    }

    printf("The sorted array is ---");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}

void swap(int *x,int *y) //function prototype for swap//
{
    int temp;
    temp =*x;
    *x= *y;
    *y= temp;

    return;
}