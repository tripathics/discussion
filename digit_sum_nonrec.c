/**
 * A 5-digit positive integer is entered through the keyboard, write a
 * recursive and a non-recursive function to calculate sum of digits of
 * the 5-digit number.
*/

#include <stdio.h>

// Non-recursive funciton to find sum of digits of a number passed
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
    int sum = 0;
    for (int digit; n != 0; n = n / 10)
    {
        digit = n % 10;
        sum = sum + digit;
    }
    
    return sum;
}