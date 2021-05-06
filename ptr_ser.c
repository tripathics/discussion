/**
 * Write a C function to evaluate the series:
 *      sin(x) = (x^1 / 1!) - (x^3 / 3!) + (x^5 / 5!) - (x^7 / 7!) + ...
 * upto 10 terms
**/

#include <stdio.h>
#include <math.h>
#include <stdint.h>

#define PI 3.1415926535897932

// Function that evaluates value of sine of an angle in degrees using call by reference
void sine(double *ptr_s, double x, uint16_t pres);

// Function that returns factorial of the number passed as input
size_t fact(int N);

int main(void)
{
    // Getting input
    printf("Enter angle in degrees: ");
    int theta;
    scanf("%i", &theta);

    printf("How much accurate do you want the result to be (1 ~ 5): ");
    uint16_t precision;
    scanf("%hu", &precision);

    // Checking if the user cooperates
    if (precision > 5 || precision < 1)
    {
        printf("Enter values within limits!\n");
        return 1;
    }

    double theta_rad = theta * PI / 180;                      // converting theta to radians

    double s = 0;
    
    // Calling the sine function
    sine(&s, theta_rad, precision);

    // printing the result
    printf("sin(%i) = %f\n", theta, s);

    return 0;
}

void sine(double *ptr_s, double x, uint16_t pres)
{
    for (int i = 1, j = 0; j < pres * 5; i += 2, j++)
    {
        *ptr_s += pow(-1, j) * pow(x, i) / fact(i);
    }

    return;
}

size_t fact(int N)
{
    size_t factorial = 1;
    for (int i = 1; i <= N; i++)
    {
        factorial *= i;
    }

    return factorial;
}