#include <stdio.h>
#include <math.h>
#include <string.h>

void hash(void);

int main()
{
    for (int i = 0; i < 17575; i++)
    {
        hash();
    }
 
    return 0;
}

void hash(void)
{
    char alphabate[10];
    int final;
    // printf("Enter a alphabate:");
    scanf("%s",alphabate);
 
    // printf("%i %i %i",alphabate[0]-'A',alphabate[1]-'A',alphabate[2]-'A');
 
    final= pow(26,2) * (alphabate[0]-'A')+ pow(26,1) * (alphabate[1]-'A') + pow(26,0) * (alphabate[2]- 'A');
 
    printf("%s: %d\n",alphabate, final);
}