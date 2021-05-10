// Ritesh Shandilya

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b, j, k ;
    char *arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d\n%d", &a, &b);

    int stop = (b <= 9) ? b : 9;

    for (j = a; j <= stop; j++)
    {
        printf("%s\n", arr[j - 1]);
    }

    for (k = 10; k <= b; k++)
    {
        if(k % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}