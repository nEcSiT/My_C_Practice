#include <stdio.h>

/**
 * main - entry into the code
 * string is a character of array
 * its datatype is only one (char).
 * its printed using a loop
*/

void main()
{
    char name[10];
    printf("Enter string: ");
    scanf("%4s", name);
    printf("%10.5s\n", &name[3]);
}