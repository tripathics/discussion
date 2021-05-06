#include <stdio.h>
#include <string.h>

void swap(char *s1, char *s2);

int main(int argc, char *argv[])
{
    // Checking proper usage
    if (argc != 2)
    {
        printf("Usage: ./strrever [STRING]\n");
        return 1;
    }

    // String to be reversed stored from argv[1]
    char *s = argv[1];
    
    // Reversing the string
    for (int i = 0, n = strlen(s); i < n / 2; i++)
    {
        swap(&s[i], &s[n - 1 - i]);
    }

    // Printing the reversed string
    printf("%s\n", s);

    return 0;
}

// Swapping characters
void swap(char *s1, char *s2)
{
    char temp = *s1;
    *s1 = *s2;
    *s2 = temp;
    
    return;
}