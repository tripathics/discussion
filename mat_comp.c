/**
 * Write a program to pick up the largest number from any 5 row by 5 column matrix.
 * **/

#include <stdio.h>

int main(void)
{
    // getting input a array//
    printf("Enter the elements of 5 X 5 matrices:");
    int mat[5][5];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    // thinking one largest number//

        int largest_row= 0;
        int largest_column=0;

    for(int i=0;i<5;i++)
    {   
        for(int j=0;j<5;j++)
        {
         
            if(mat[i][j]>mat[i+1][j+1])
            {
                largest_row =i+1;
                largest_column = j+1;
            }
            
        }
    }
    printf("The largest number in the array is %d ",mat[largest_row][largest_column]);

    return 0;
    
}