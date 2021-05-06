#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Checking proper usage
    if (argc != 2)
    {
        printf("Usage: ./card [CARD NUMBER]\n");
        return 1;
    }
    if (strlen(argv[1]) != 16)
    {
        printf("Card number should be 16 digits only\n");
        return 1;
    }
    
    char *card = argv[1];

    // twice of each even digit sum
    int even_sum = 0; 
    for (int i = 0, temp; i < 16; i += 2)
    {
        temp = 2 * (card[i] - '0');
        if (temp >= 10)
        {
            temp = temp - 9;
        }

        even_sum += temp;
    }

    int odd_sum = 0;
    for (int i = 1; i < 16; i += 2)
    {
        odd_sum += card[i] - '0';
    }
    
    if ((odd_sum + even_sum) % 10 != 0)
    {
        printf("Card number is INVALID\n");
    }
    else
    {
        printf("Card number is VALID\n");
    }

    return 0;    
}