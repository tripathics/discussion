/********************
Write a function that receives 5 integers and returns the sum,
average and standard deviation of these numbers. Call this function
from main( ) and print the results in main( )
*****************************************/

#include <stdio.h>

void data(int num,int *sum, int *add);

int main()
{   
  int n, sum;
  printf("How many number you want "); //Getting input from the user

  scanf("%d",&n); //a boundary 

  int arr[n];
  for (int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]); 
  }


  data(n,&arr[0], &sum);

  printf("Sum: %i\n", sum);
    
  return 0;
}

void data(int num,int *sum, int *add)
{
  
  *add =0;
  for(int i =0;i<num;i++)
  {
    *add = *add+ sum[i];
  }

}