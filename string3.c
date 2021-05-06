#include <stdio.h>

int main(void)
{
    char s[3] = "HI!";

    for (int i = 0; i < 8; i++)
    {
        printf("%c\t", s[i]);
        printf("%i\n", s[i]);
    }
}