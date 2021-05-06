#include <stdio.h>

int i;                  // external

int main(void)
{
    static int j;       // static
    auto int k;         // auto

    printf("i: %p\nj: %p\nk: %p\n", &i, &j, &k);

    return 0;
}