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
   printf("Enter the size of array : ");
   scanf("%d",&size);

   int arr[size];

   //getting elements from the user //
    printf("Enter the elements :");
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    //for positive number //
    int counter_positive =0;
    int counter_negative =0;

    int counter_odd=0;
    int counter_even=0;

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
        
        if(arr[i] % 2==0)
        {
            counter_even++;
        }
        else
        counter_odd++;
        
        
        
    }
    
    
        printf("The positive number is %d \n",counter_positive);

        printf("The negative number is %d  \n",counter_negative);

        printf("The odd number is %d  \n",counter_odd);

        printf("The even number is %d  \n",counter_even);
        
   return 0;
   
    
}