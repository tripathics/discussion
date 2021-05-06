#include <stdio.h>

int main(void)
{
    char s[5];
    printf("Enter your name: ");
    
    scanf("%s", s);

    for (int i = 0; i < 5; i++)
    {
        printf("%c", s[i]);
    }
    printf("%c", s[6]);
    printf("%c", s[7]);
    printf("%c", s[8]);
    printf("%i", s[9]);
    printf("%i", s[10]);
    printf("%i", s[11]);
    printf("\n");
}