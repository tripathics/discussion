/* *
 * 1  2  3  4
 * 5  6  7  8
 * 9  10 11 12
 * 13 14 15 16
 * 
 * 14 24 30 22
 * 
 * 
 * */
#include <stdio.h>

int main(void)
{
    int matrix[5][5];

    printf("Enter elements: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i %i:\t", i + 1, j + 1);
            scanf("%i", &matrix[i][j]);
        }
    }    
    
    // Matrix where averaged elements will be stored
    int avg_matrix[5][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            avg_matrix[i][j] = 0;
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int m = -1; m <= 1; m++)
            {
                for (int n = -1; n <=1; n++)
                {
                    if (i + m < 0 || j + n < 0)
                    {
                        continue;
                    }
                    if (i + m >= 5 || j + n >= 5)
                    {
                        break;
                    }
                    
                    avg_matrix[i][j] = avg_matrix[i][j] + matrix[i + m][j + n];
                }
            }
            
        }
    }

    printf("\nmatrix\t\t\t\t\t\tavg_matrix\n\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i\t", matrix[i][j]);
        }
        printf("\t");
        for (int j = 0; j < 5; j++)
        {
            printf("%i\t", avg_matrix[i][j]);
        }
        printf("\n\n");
    }
    
    return 0;
}