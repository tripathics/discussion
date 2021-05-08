#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    // Checking proper usage
    if (argc != 2)
    {
        printf("./num_to_word [number]\n");
        return 1;
    }

    // The number
    int n = atoi(argv[1]);

    // The number in word
    char *numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Printing the reqd. output
    if (n >= 1 && n <= 9)
    {
        printf("%s\n", numbers[n - 1]);
    }
    else if (n > 9)
    {
        printf("Greater than 9\n");
    }
    else
    {
        printf("I don't know what to do :P\n");
    }

    return 0;
}