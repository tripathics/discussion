#include <stdio.h>
#include <math.h>

int main(void)
{
    int num, rev = 0;

    // Taking input
    printf("Enter 5-digit number: ");
    scanf("%i", &num);

    // storing digits in rev
    for (int i = 0; i < 5; i++)
    {
        // digit = (num % (int) pow(10, i + 1)) / pow(10, i);
        rev += pow(10, 4 - i) * ((num % (int) pow(10, i + 1)) / (int) pow(10, i));
    }

    // printing the reversed number
    printf("%i reversed is %i\n", num, rev);

    return 0;
}