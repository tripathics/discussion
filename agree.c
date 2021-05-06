#include <stdio.h>
#include <string.h>

#define OR ||

int main(void)
{
    printf("Do you agree? ");
    char c[3];

    scanf("%s", c);

    if (strcasecmp(c, "yes") == 0 OR strcasecmp(c, "y") == 0)
    {
        printf("Agreed\n");
    }
    else if (strcasecmp(c, "no") == 0 OR strcasecmp(c, "n") == 0)
    {
        printf("Not agreed\n");
    }
    else
    {
        printf("Huh??\n");
    }

    return 0;
}