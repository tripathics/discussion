/**
 * Pseudocode:
 * 1) call the first element sorted
 *      : place a marker after first element (left side sorted, right side unsorted)
 * 
 * 2) keep comparing first element of unsorted array with last element of sorted array, moving from last to 
 *    second last, third last and so on till (first unsorted element !> element in sorted array)
 * 3) place the number from sorted array next to that element (in step 2) and shift all elements of sorted array
 *    the requisite places
 * 4) move the marker to right
 **/

#include <stdio.h>

void insertion_sort(int array[], size_t size);
void shift(int array[], size_t marker, size_t places);

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
    insertion_sort(array, size);

    // printing the sorted array
    printf("Sorted: ");
    for (size_t i = 0; i < size; i++)
    {
        printf("%i%s", array[i], (i != size - 1) ? ", " : "");
    }
    printf("\n");

    return 0;
}


void insertion_sort(int array[], size_t size)
{
    // for the marker between sorted and unsorted arrays
    for (size_t marker = 1; marker < size; marker++)
    {
        // number of places to shift the element that is currently being sorted
        size_t places = 1;
        
        // comparing the ussorted and sorted
        if (array[marker - 1] > array[marker])
        {
            for (long j = marker - 2; j >= 0; j--)
            {
                if (array[j] < array[marker])
                {
                    break;
                }
                places++;
            }

            shift(array, marker, places);
        }
    }
}

void shift(int array[], size_t marker, size_t places)
{
    int temp = array[marker];                        // first element of unsorted array

    // index where number that is just greater than the first element of unsorted array
    long just_larger = marker - places;

    for (long i = marker; i > just_larger; i--)
    {
        array[i] = array[i - 1];
    }

    array[just_larger] = temp;

    return;
}