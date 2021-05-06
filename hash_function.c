#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

unsigned int hash(const char *word);

int main(void)
{
    char word[10];
    scanf("%s", word); 

    printf("%s: %i\n", word, hash(word));

    return 0;
}

unsigned int hash(const char *word)
{
    unsigned int index = 0;

    int n = (strlen(word) > 3) ? 3 : strlen(word);

    for (int i = n - 1; i >= 0; i--)
    {
        unsigned int letter_en = toupper(word[i]) - 'A';
        index += letter_en * pow(26, n - 1 - i);
    }

    return index;
}