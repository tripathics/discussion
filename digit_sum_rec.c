/**
 * A 5-digit positive integer is entered through the keyboard, write a
 * recursive and a non-recursive function to calculate sum of digits of
 * the 5-digit number.
*/

#include <stdio.h>

// Recursive funciton to find sum of digits of a number passed
int dig_sum(int n);

int main(void)
{
    // 5-digit number from stdin
    int num;
    printf("Enter a 5-digit number: ");
    scanf("%i", &num);

    int result = dig_sum(num);

    printf("%i\n", result);

    return 0;
}

int dig_sum(int n)
{
    if (n != 0)
    {
        return n % 10 + dig_sum(n / 10);
    }
    else
    {
        return 0;
    }
}