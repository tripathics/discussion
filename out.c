#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            for (int k = 0; k < 26; k++)
            {
                printf("%c%c%c\n", i + 'A', j + 'A', k + 'A');
            }
        }
    }
}