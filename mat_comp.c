/**
 * Write a program to pick up the largest number from any 5 row by 5 column matrix.
 * **/

#include <stdio.h>

int main(void)
{
    // getting input a array//
    printf("Enter the elements of 5 X 5 matrices:");
    int mat[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0;j < 5; j++)
        {
            scanf("%i", &mat[i][j]);
        }
    }

    // thinking one largest number//
    int largest_row = 0;
    int largest_column = 0;
    for (int i = 0; i < 5; i++)
    {   
        for (int j = 0; j < 5; j++)
        {
            if(mat[largest_row][largest_column] < mat[i][j])
            {
                largest_row = i;
                largest_column = j;
            }
        }
    }
    printf("The largest number in the array is %i\n", mat[largest_row][largest_column]);

    return 0;
    
}