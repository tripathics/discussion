#include <stdio.h>

int main(void)
{
    for (unsigned char c = 0; c < 255; c++)
    {
        printf("%i: %c\n", c, c);
    }

    return 0;
}


