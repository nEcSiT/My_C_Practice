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

    while (i)
    {
        printf("%s\n", name[i]);
        i++;
    }
}