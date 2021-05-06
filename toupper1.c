#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "PurSoTtam";
    
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    printf("%s\n", s);
}