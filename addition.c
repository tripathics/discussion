#include <stdio.h>

/**
 * Function that takes two nummbers as input and returns their sum as output
 * Input: int a, int b
 * output: int a + b
*/
int add(int a, int b);               // function prototype

int main(void)
{
    // Numbers to be added
    int num1, num2;
    printf("Enter numbers to be added: ");
    scanf("%d %d", &num1, &num2);

    // Variable for storing result from add() function
    int result = add(num1, num2);                           // Calling add() function and passing num1 and num2 as agruments

    printf("%i + %i = %i\n", num1, num2, result);
    return 0;
}

int add(int a, int b)
{
    return a + b;                                           // Return result is stored in result
}