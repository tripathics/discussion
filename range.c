/**********8
Write a program to find the range of a set of numbers entered
through the keyboard. Range is the difference between the smallest
and biggest number in the list.
*********/
 
#include <stdio.h>
 
int main()
{
    int n;    
 
    printf("Enter upto which you want a set ");
    scanf("%d",&n);
 
    int num[n];
    printf("Enter the numbers\n");  //getting input number from the user 

    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
 
    }
    int smallest = num[0], largest = num[0];
    for(int i = 1; i < n; i++)
    {
        if(num[i] < smallest)
        {
            smallest = num[i];
        }

        if (num[i] > largest)
        {
            largest = num[i];
        }
    }

    printf("\nRange = %d\n",largest - smallest);
 
    return 0;
}