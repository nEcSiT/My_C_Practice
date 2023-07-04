#include "main.h"
#include <stdio.h>
/**
 * _strlen - gives the string length in value.
 * takes a single input.
 * returns an integer value.
 
*/

int _strlen(char* a)

{
    int i = 0, count = 0;

    while (i != '\0')
    {
        count++;
        i++;
    }
    return(count);
}