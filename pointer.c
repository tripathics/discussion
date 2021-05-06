#include <stdio.h>

int main(void)
{
    int a = 9;
    int *p;                 // pointer declaration
    p = &a;                 // pointer assignment

    printf("%i\n", *p);     // dereferencing

    printf("enter any value to store in a using ptr p\n");
    scanf("%i", p);

    printf("*p: %i\n", *p);
    printf("a: %i\n", a);
}