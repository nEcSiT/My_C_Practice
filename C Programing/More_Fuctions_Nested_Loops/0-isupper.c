#include "main.h"

/**
 * main - entry into the code
 * @c: checks if the letter is upper.
 * Return: 0
*/

int _isupper(int c)
{
    if (c <= 'Z' && c >= 'A')
        return (1);

    else 
        return (0);    
}