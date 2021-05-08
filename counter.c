/******
Twenty-five numbers are entered from the keyboard into an array.
Write a program to find out how many of them are positive, how
many are negative, how many are even and how many odd.
*******/

#include<stdio.h>

int main()
{
   int size;

   //entering the size//
   printf("Enter the size of array");
   scanf("%d",size);

   int arr[size];

   //getting elements from the user //
    printf("Enter the elements ");
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    //for positive number //
    int counter_positive =0;
    int counter_negative =0;

    for(int i=0;i<size;i++)
    {
   
        
        if(arr[i]>=0)
        {
            counter_positive++;
        
        }

        else
        {
            counter_negative++;
        }
        
    }
    
   printf("The positive number is %d",counter_positive);

   printf("The negative number is %d ",counter_negative);

   return 0;
   
    
}