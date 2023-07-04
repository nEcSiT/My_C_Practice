#include <stdio.h>
#include <string.h>

/**
 * main - entry into the code
 * Reversing a string.
 * array
 * loops
 * char
 * return
*/

void main()
{
    char name[] = "Stephannie Naa Klokor Kortei", ch;
    int len = 0, i;

    for (i=0; name[i] != '\0'; i++)
    {
        len++;
    }

    for (i=0; i<len/2; i++)
    {
        ch = name[i];
        name[i] = name[--len];
        name[len] = ch; 
    }
}