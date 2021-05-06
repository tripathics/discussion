#include <stdio.h>

long power(int a, int b);

int main()
{
    int num1,exp;
    printf("write a number and the  exponent :");
    scanf("%i %i",&num1, &exp);
    
    long result = power(num1,exp);
    printf("Result is %li\n", result);
    
    return 0;
}

long power(int a, int b)
{
    float ans = 1;
    for(int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}