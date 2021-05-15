/* copy the string to this charecter */

#include <stdio.h>

int main()
{
    char a[6] = "hello";
    char b[6] ;

    int i;
    for( i=0; a[i] != '\0';i++)
    {
        b[i] = a[i];
    }
    b[i] ='\0';
    printf("%s",b);

    return 0;
}