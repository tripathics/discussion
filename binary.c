#include <stdio.h>
#include <math.h>

int binary(int n);

int main(void)
{
    // Decimal number stored here
    int num;

    printf("Enter a decimal number: ");
    scanf("%i", &num);

    // Binary equivalent of num
    int result = binary(num);


    printf("%i\n", result);

    return 0;
}


/**
 * Function takes decimal number as input and returns its binary equivalent
 * Input: int n, Output: int
*/
int binary(int n)
{
    // Binary equivalent of number passed into the function
    int bin;

    for (int i = 0, q = n, r; q != 0; i++)
    {
        r = q % 2;
        q = q / 2;

        bin += pow(10, i) * r;
    }    

    return bin;
}