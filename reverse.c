#include <stdio.h>
#include <math.h>

int main(void)
{
    int num, digit[5];

    // Taking input
    printf("Enter 5-digit number: ");
    scanf("%i", &num);

    // storing digits in array digit[]
    for (int i = 0; i < 5; i++)
    {
        digit[i] = (num % (int) pow(10, i + 1)) / pow(10, i);
    }
    
    // storing the number in reversed manner
    int rev = 0;
    for (int i = 0; i < 5; i++)
    {
        rev += pow(10, 4 - i) * digit[i];
    }

    // printing the reversed number
    printf("%i reversed is %i\n", num, rev);

    return 0;
}