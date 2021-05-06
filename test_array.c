#include <stdio.h>

void sort(int *arr);
void swap(int *a, int *b);

int main(void)
{
    int array[] = {5, 4, 3, 1, 2, 7, 8};

    sort(array);

    printf("Array: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%i%s", array[i], (i == 7 ? "\n" : ", "));
    }
    return 0;
}

void sort(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}