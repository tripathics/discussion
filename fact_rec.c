#include <stdio.h>

int fact(int n);

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);

    size_t result = fact(num);
    printf("Factorial of %i is %zu\n", num, result);

    return 0;
}

int fact(int n)
{
    if (n == 0)
    {
        // base case
        return 1;
    }
    else
    {
        // Recursive case
        return n * fact(n - 1);
    }
}