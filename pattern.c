#include <stdio.h>

void pattern(int h);

int main(void)
{
    // height of pattern
    int height;
    printf("Enter height: ");
    scanf("%i", &height);

    pattern(height);

    return 0;
}

// function for printing pattern
void pattern(int h)
{
    if (h == 0)
    {
        return;
    }
    else
    {
        pattern(h - 1);
        for (int i = 0; i < h; i++)
        {
            printf("# ");
        }
        printf("\n");
        return;
    }
}