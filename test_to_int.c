/*********
Write a program that converts a string like "124" to an integer 124.
*****/
#include<stdio.h>

int main()
{
    char str[5];

    printf("Enter a string like 123 ");
    scanf("%s",str);

    printf("%s",str-79);

    return 0;
}