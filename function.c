#include <stdio.h>
#include <string.h>

char *get_name(void);

int main(void)
{
    printf("What is your name?\t");
    char *name = get_name();

    printf("Hello, %s\n", name);

    return 0;
}

char *get_name(void)
{
    char *out;
    fgets(out, 100 * sizeof(char), stdin);

    return out;
}