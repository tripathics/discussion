#include <stdio.h>

typedef struct
{
    char name[20];
    char phone[10];
}
person;

int main(void)
{
    // opening the file
    FILE *cont = fopen("contacts.csv", "a");
    if (cont == NULL)
    {
        return 1;
    }

    // Variable for storing contact
    person contact;

    // Writing to file
    printf("Enter name: ");
    scanf("%s", contact.name);

    printf("Enter number: ");
    scanf("%s", contact.phone);

    // writing from contact variable to file
    fprintf(cont, "%s,", contact.name);
    fprintf(cont, "%s\n", contact.phone);

    // Closing the file
    fclose(cont);

    return 0;
}