#include <stdio.h>

int main(void)
{
    printf("How many numbers are you going to enter? ");
    int N;
    scanf("%i", &N);

    // Getting numbers
    printf("Enter the numbers\n");
    int num;
    
    unsigned int positive = 0, negative = 0, zeroes = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%i", &num);
        if (num < 0)
            negative++;
        else if (num > 0)
            positive++;
        else
            zeroes++;
    }

    printf("Postives: %i\nNegatives: %i\nZeroes: %i\n", positive, negative, zeroes);

    return 0;
}