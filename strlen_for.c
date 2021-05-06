#include <stdio.h>

int main(void)
{
    int i;                          // loop counter and string length
    char *s = "Chandrashekhar";
    for (i = 0; *(s + i) != '\0'; i++)        // for loop second statement can be any boolean expression
    {
        printf("%c", *(s + i));
    }
    printf("\nLength: %i\n", i);
}