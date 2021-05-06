#include <stdio.h>

void addition(int numbers[], int N, int *s_ptr);

int main(void)
{
    int N, sum;
    printf("How many numbers are there: ");
    scanf("%i", &N);

    int array[N];

    printf("Enter the numbers\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%i", &array[i]);
    }


    addition(array, N, &sum);
    printf("sum = %i\n", sum);

    return 0;
}

void addition(int numbers[], int N, int *s_ptr)
{
    int s;
    for (int i = 0; i < N; i++)
    {
        s = s + numbers[i];
    }

    *s_ptr = s;

    return;    
}