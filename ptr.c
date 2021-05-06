#include <stdio.h>

int main(void)
{
    int x = 10;
    int *ptr_x = &x;

    float y = 3.14;
    float *ptr_y = &y;

    printf("%lu  %lu\n", sizeof(int), sizeof(int *));
    printf("%lu  %lu\n", sizeof(float), sizeof(float *));
    printf("%lu  %lu\n", sizeof(double), sizeof(double *));
    printf("%lu  %lu\n", sizeof(char), sizeof(char *));
}