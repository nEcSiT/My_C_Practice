# include <stdio.h>

/**
 * main - entry into the code
 * string is a character of array
 * its datatype is only one (char).
 * its printed using a loop
*/

void main()
{
    char name[20] = {'N','i','c','h','o','l','a','s'};
    int i = 0;

    for (i=0; i<="\0"; i++)
    {
        printf("%s", name[i]);
    }
}