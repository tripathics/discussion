#include <stdio.h>

int main(void)
{
    int *p;
    printf("%i\n", *p);
}

// output segmentation fault: when you touch the memory that doesn't belong to you