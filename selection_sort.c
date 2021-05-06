#include <stdio.h>

// declaring global array


void swap(int *x, int *y);

int main(void)
{
    size_t size;

    // getting size of array from user
    printf("How many numbers do you want to enter?\t");
    scanf("%zu", &size);
    
    int array[size];
    
    // getting array elements from user
    printf("Enter the array elements:\n");
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    
    // sorting
    
    for (size_t i = 0; i < size - 1; i++)
    {
        size_t in_smallest = i;                        // index of smallest number encountered so far
        for (size_t j = i + 1; j < size; j++)
        {
            if (array[in_smallest] > array[j])
            {
                in_smallest = j;
            }
        }

        swap(&array[i], &array[in_smallest]);
    }

    printf("sorted: ");
    for (size_t i = 0; i < size; i++)
    {
        printf("%i\t", array[i]);
    }
    printf("\n");

    return 0;
}

// swapping using call by reference
void swap(int *x, int *y)
{
    int temp;       // for storing some value temporarily
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}