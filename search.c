#include <stdio.h>

int main(void)
{
    int size;

    // getting input
    printf("How many numbers are you going to enter: ");
    scanf("%i", &size);

    int array[size];                    // declaring array

    printf("\nEnter the numbers:\t");
    for (int i = 0; i < size; i++)
    {
        scanf("%i", &array[i]);
    }

    int search, count = 0;

    printf("Enter the number you want to search: ");
    scanf("%i", &search);

    for (int i = 0; i < size; i++)
    {
        if (search == array[i])
        {
            // incrementing the counter everytime the number is matched with search
            count++;
        }
    }

    // printing the result
    if (count == 0)
    {
        printf("Not found\n");
        return 0;
    }
    else
    {
        printf("The number was found %i times\n", count);
        return 0;
    }
}