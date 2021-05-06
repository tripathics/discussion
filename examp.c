#include <stdio.h>

int main(void)
{
    unsigned char ch = 255;
    printf("ch: %d\n", ch);

    ch = ch + 1;
    printf("ch++: %d\n", ch);
}