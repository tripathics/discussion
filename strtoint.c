/*********
Write a program that converts a string like "124" to an integer 124.
*****/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    // Getting input from user
    char str[500];
    printf("Enter a string like with max length of 5: ");
    scanf("%s", str);

    // converting string to integer character-wise
    int num = 0;

    for (int i = 0, n = strlen(str); i < n; i++)
    {
        num = num + pow(10, i) * (str[n - i - 1] - 48);
    }

    printf("The number + 2 is: %i\n", num + 2);

    return 0;
}