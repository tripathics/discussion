#include <stdio.h>

int main(void)
{
    char *s = "Pursottam";
    printf("%s\n", s);      // prints string starting at address of s
    printf("%p\n", s);      // prints address of s in HEX
    printf("%i\n", s);      // prints address of s in DEC

}