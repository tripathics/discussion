#include <stdio.h>
#include <math.h>

int main(void)
{
    for (unsigned long int i = 1; i < pow(10, 20); i+=2)
    {
        printf("%li\n", i);
        if (i == 0)
        {
            break;
        }
    }
}