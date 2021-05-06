#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b);
void bubble_sort(int array[], size_t size);


int main(void)
{
    // Getting input from user
    size_t size;
    printf("Size of array: ");
    scanf("%zu", &size);
    
    int array[size];

    for (size_t i = 0; i < size; i++)
    {
        scanf("%i", &array[i]);
    }

    // sorting
    bubble_sort(array, size);
    
    

    // Printing the sorted array
    for (size_t i = 0; i < size; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
    return 0;
}


void bubble_sort(int array[], size_t size)
{
    // to check whether there is any swap in an iteration in the for loop
    bool swap_check = true;

    for (size_t i = size - 1; swap_check != false; i--)
    {
        swap_check = false;
        for (int j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                swap_check = true;
            }
        }
    }
}


void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}