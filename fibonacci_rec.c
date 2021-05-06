/**
 * Write a recursive function to obtain the first 25 numbers of a
 * Fibonacci sequence. In a Fibonacci sequence the sum of two 
 * successive terms gives the third term. Following are the first few
 * terms of the Fibonacci sequence:
 * 1 1 2 3 5 8 13 21 34 55 89... 
 * **/

#include <stdio.h>

int fib(int n);

int main(void)
{
    for (int i = 0; i < 25; i++)
    {
        printf("%i ", fib(i));
    }
    printf("\n");
    
    return 0;
}

// Prints till the nth fibonacci term
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}