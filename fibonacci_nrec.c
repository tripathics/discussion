/**
 * Write a recursive function to obtain the first 25 numbers of a
 * Fibonacci sequence. In a Fibonacci sequence the sum of two 
 * successive terms gives the third term. Following are the first few
 * terms of the Fibonacci sequence:
 * 1 1 2 3 5 8 13 21 34 55 89... 
 * **/

#include <stdio.h>

void fib(int n);

int main ()
{
    printf("Upto what term do you wish to see fibonacci series?\t");
    fib(25);
}

/*
void fib(int n)
{
    int el[n];
    el[0] = 0;
    el[1] = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i <= 1)
        {
            printf("%i ", el[i]);
            continue;
        }
        
        el[i] = el[i - 1] + el[i - 2];
        printf("%i ", el[i]);
    }
    printf("\n");
    
    return;
} 
*/

void fib(int n)
{
    for (int i = 0, sec_last = 0, last = 1; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
            printf("%i ", i);
            continue;
        }
        
        int curr_term = last + sec_last;
        printf("%i ", curr_term);

        sec_last = last;
        last = curr_term;
    }
    printf("\n");

    return;
}