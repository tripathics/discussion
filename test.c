#include <stdio.h>

int main(void)
{
    int x[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%p\t", &x[i][j]);
        }
        printf("\n");
    }
    printf("%i\n", *(*x + 2) + 5);

    return 0;
}