#include <stdio.h>
#include "main.h"

/**
 * _strcat - appends a source string to a destination string
 * Returns destination string.
*/

int _strcat(int* a, int* b)
{
    int i,len1, len2;
    len1 = _strlen(a);
    len2 = _strlen(b);

    for (i=0; i<=len2; i++ )
    {
        a[len1] = b[i];
        len1++;
    }
    return(a);
}