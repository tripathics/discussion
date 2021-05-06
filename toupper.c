#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char *s = "Pursottam";
    char t[strlen(s)];
    for (int i = 0; i < strlen(s); i++)
    {
        t[i] = toupper(*(s + i));
    }
    printf("%s\n", s);
    printf("%s\n", t);
    
}