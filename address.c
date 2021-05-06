#include <stdio.h>

int main(void)
{
    int i = 9;
    printf("Stored at: ");
    printf("%p is\t", &i);       // printing address of i using & operator

    // printing the content at address of i using * operator
    printf("%i\n", *&i);
}

// %p since p for pointer