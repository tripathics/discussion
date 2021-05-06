/**
 * Pseudocode:
 * 1) Sort the left half
 * 2) sort the right half
 * 3) merge the halves
 **/

#include <stdio.h>

void merge_sort(int array[], size_t start, size_t end);
void merge(int array[], size_t start, size_t middle, size_t end);

int main(void)
{
    // getting input 
    size_t size;
    printf("Size of array: ");
    scanf("%zu", &size);

    int array[size];

    printf("Enter the elements:\n");
    for (size_t i = 0; i < size; i++)
    {
        scanf("%i", &array[i]);
    }

    // sorting using merge_sort
    merge_sort(array, 0, size);

    // printing the sorted array
    printf("Sorted: ");
    for (int i = 0; i < size; i++)
    {
        printf("%i%s", array[i], (i != size - 1) ? ", " : "");
    }
    printf("\n");

    return 0;
}


void merge_sort(int array[], size_t start, size_t end)
{
    // if single or no element in array, we call is sorted
    if (end - start <= 1)
    {
        return;
    }

    // index of middle element
    size_t middle = (start + end) / 2;

    // sorting left half
    merge_sort(array, start, middle);

    // sorting right half
    merge_sort(array, middle, end);

    // merging the halves
    merge(array, start, middle, end);
}


void merge(int array[], size_t start, size_t middle, size_t end)
{
    // temporary array for storing the elements 
    size_t merged_size = end - start;
    int temp[merged_size];

    // iterators for left and right halves
    size_t m = 0, n = 0;

    // iterating through temp array
    for (int i = 0; i < merged_size; i++)
    {
        // checking whether first element of left array is smaller than that of right array
        if ((start + m < middle) && ((array[start + m] < array[middle + n]) || (middle + n) >= end))
        {
            temp[i] = array[start + m];

            // moving to next element in left array
            m++;
        }
        else
        {
            temp[i] = array[middle + n];

            // moving to next element in right array
            n++;
        }
    }

    // copying elements from temp array to output array
    for (size_t i = 0; i < merged_size; i++)
    {
        array[start + i] = temp[i];
    }

    return;
}