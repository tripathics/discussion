
/*********
A Credit Card number is usually a 16-digit number. A valid Credit
Card number would satisfy a rule explained below with the help of a
dummy Credit Card number—4567 1234 5678 9129. Start with the
rightmost - 1 digit and multiply every other digit by 2.
4 5 6 7 1 2 3 4 5 6 7 8 9 1 2 9
8   12  2   6   10   14  18  4
Then subtract 9 from any number larger than 10. Thus we get:
8 3 2 6 1 5 9 4
Add them all up to get 38.
Add all the other digits to get 42.
Sum of 38 and 42 is 80. Since 80 is divisible by 10, the Credit Card
number is valid.
Write a program that receives a Credit Card number and checks
using the above rule whether the Credit Card number is valid.
************/

#include<stdio.h>
#include <string.h>
int muliply( char card_2);

int main()
{

    char card[20];// declering the string

    //getting input from the user
    printf("Enter your  card number [ SBI credit card ]");

    scanf("%s",card);
    // calculating the string length so to ensure valid string length
    if(strlen(card) != 16 || strlen(card) <2)
    {
        printf("Enter a valid card number");
        
        return 1;
    }
    
   
    multiply(card); // calling the muttiply function

    int odd =0;
    for(int i=1; i <strlen(card); i+=2)
    {
        odd = odd+ card[i];
    }

    if(odd+even % 10==0)   // condition for valid card number //s
    {
        printf("the entered card number is valid ");

    }
    else

        printf("Card number is not valid ");



    return 0;
}



int muliply( char card_2)
{
    int temp; // declearing a third variable 
    int even=0;

    for(int i=0; i<strlen(card_2);i+=2;)
    {
        temp =  2* card_2[i];
        if(temp>=10)
        {
            temp=temp-9;

        }
    
        even = even+temp;
    }
    return (even);
   
}