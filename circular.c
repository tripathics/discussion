#include <stdio.h>

void shift(int *x, int N);

int main(void)
{
    // taking input
    printf("How many numbers are there?\t ");
    int N;
    scanf("%i", &N);

    int set[N];
    printf("Enter the numbers: ");
    for (int i = 0; i < N; i++)     scanf("%i", &set[i]);

    // printing current values before shifting
    printf("\nBefore shifting:\n");
    for (int i = 0; i < N; i++)     printf("[%i]: %i\t", i, set[i]);

    // shifting circularly
    shift(&set[0], N);

    // printing after shifting
    printf("\n\nAfter shifting:\n");
    for (int i = 0; i < N; i++)     printf("[%i]: %i\t", i, set[i]);
    printf("\n\n");

    return 0;    
}

void shift(int *x, int N)
{
    // temporary variable
    int temp = x[0];
    for (int i = 0; i < N - 1; i++)     x[i] = x[i + 1];
    x[N - 1] = temp;

    return;
}