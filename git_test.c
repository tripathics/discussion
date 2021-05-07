#include <stdio.h>

int main(void)
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < 10; i++)
    {
        printf("%i%s", arr[i], (i != 9) ? ", " : "\n");
    }

    return 0;
}