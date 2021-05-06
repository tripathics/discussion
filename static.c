#include <stdio.h>

void fun_auto(void);
void fun_static(void);

int main(void)
{
    for (int i = 0; i < 500; i++)
    {
        fun_auto();
        printf("\t");
        fun_static();
        printf("\n");
    }
    return 0;
}

void fun_auto(void)
{
    auto int var_auto = 0;
    printf("var_auto: %i", var_auto);
    var_auto++;

    return;
}

void fun_static(void)
{
    static int var_static = 0;
    printf("var_static: %i", var_static);
    var_static++;

    return;
}