#include <stdio.h>

int main()
{
    int con, km, inches;
    float foot, miles;

    while (1)
    {
        printf("\nEnter the conversion you want:\n1 for km to miles, 2 for inches to foot: ");
        scanf("%i", &con);
        
        if (con==1)
        {
            printf("Enter km: ");
            scanf("%i", &km);
            miles = 1.609 * km;    
            printf("miles %f\n", miles);
        }
        else if (con==2)
        {
            printf("Enter inches: ");
            scanf("%i", &inches);
            foot = inches / 12;    
            printf("foot %f\n", foot);
        }
        else
        {
            printf("Invalid Option\n");
            return 1;
        }
        getchar();

        char cont = -1;
        printf("\nDo you want to continue?\n");
        do
        {
            printf("Enter y/n\t");
            scanf("%c", &cont);
            getchar();
        }
        while ((cont != 'y') && (cont != 'Y') && (cont != 'n') && (cont != 'N'));

        if (cont == 'y' || cont == 'Y')
        {
            continue;
        }
        else if (cont == 'n' || cont == 'N')
        {
            break;
        }
    }

    return 0;
}