#include <stdio.h>
#include <math.h>

int main(void)
{
    int i = 3, j, k, l;
    j = pow((i + 1), 2);
    k = pow((i++), 2);
    l = pow((++i), 2);

    printf("%d %d %d %d\n", i, j, k, l);
    return 0;
}