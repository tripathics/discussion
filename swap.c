#include <stdio.h>

// function prototype
void swap(int *x, int *y);

int main(void)
{
    int a = 1;
    int b = 2;
    printf("Before swapping:\na = %i\tb = %i\n", a, b);

    // variable for storing some values temporarily
    int temp;

    swap(&a, &b);
    // swapping
    // temp = a;
    // a = b;
    // b = temp;

    printf("After swapping:\na = %i\tb = %i\n", a, b);
}

// swapping using call by reference
void swap(int *x, int *y)
{
    int temp;       // for storing some value temporarily
    temp = *x;
    *x = *y;
    *y = temp;

    printf("Inside function swap\n*x = %i\t*y = %i\n", *x, *y);
    return;
}