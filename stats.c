#include <stdio.h>
#include <math.h>

/**
 * Function takes set of numbers and evaluates its various MEASURES OF CENTRAL TENDENCY 
 * Input: Numbers of which we are finding central tendency, number of numbers,
 *        Pointers to sum, average and standard deviation
 * 
 * Output: Void
*/
void central(int num[], int N, int *sum, double *u, double *S);

int main(void)
{
    // Getting input
    printf("How many numbers are there");
    int N;
    do
    {
        printf(": ");
        scanf("%i", &N);
    }
    while (N < 1);

    int numbers[N];
    printf("Enter the numbers\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%i", &numbers[i]);
    }

    // Measures of central tendency
    int sum;
    double average, std_dev;
    
    // Calling the statistics function
    central(numbers, N, &sum, &average, &std_dev);

    // Printing the result
    printf("\nFor the set of numbers\t");
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            printf("{%i, ", numbers[i]);
            continue;
        }

        if (i == N - 1)
        {
            printf("%i}\n", numbers[i]);
            continue;
        }
        
        printf("%i, ", numbers[i]);
    }
    printf("\nSum = %i\nAverage = %f\nStandard Deviation = %f\n\n", sum, average, std_dev);

    return 0;
}

void central(int num[], int N, int *sum, double *u, double *S)
{
    // Calculating the Sum
    *sum = 0;
    for (int i = 0; i < N; i++)
    {
        *sum += num[i];
    }

    // Calculating the Average
    *u = *sum / (float) N;

    // Calculating the Standard Deviation
    double sigma_sq = 0;
    for (int i = 0; i < N; i++)
    {
        sigma_sq += pow(num[i] - *u, 2);
    }
    *S = sqrt(sigma_sq / N);

    return;
}