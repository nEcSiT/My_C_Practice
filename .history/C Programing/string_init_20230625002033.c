# include <stdio.h>

/**
 * main - entry into the code
 * string is a character of array
 * its datatype is only one (char).
 * its printed using a loop
*/

void main()
{
    char name[20] = "Nicholas Dornyo";
    int i = 0;
    while (i<20)
    {
        printf("%s\n", name[i]);
        i++;
    }
}