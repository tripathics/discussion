#include <stdio.h>

int main(void)
{
    char name[5];
    printf("What is your name?  ");
    scanf("%s", name);              // name is a pointer to name[0]
    // printing address of name[0]
    printf("name[0]: %p\n", &name[0]);

    // printing address of name
    printf("name: %p\n", name);
    
    printf("\nHello, %s\n", name);    // the computer knows if a string has ended by checking NUL character
}