#include <stdio.h>

int fact(int n);

int main(void)
{
    // Getting input
    printf("Enter the number of terms till you want the sum for the series: ");
    int N;
    scanf("%i", &N);

    // Finding the sum til Nth term
    float sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += i / (float)fact(i);
    }

    printf("Sum till %ith terms = %f\n", N, sum);

    return 0;
}

// Function that returns factorial of n
int fact(int n)
{
    int prod = 1;
    for (int i = 1; i <= n; i++)
    {
        prod *= i;
    }

    return prod;
}