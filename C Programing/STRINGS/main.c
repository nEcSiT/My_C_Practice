#include <stdio.h>
#include "main.h"

/**
 * main - entry to the code
 * strings
 * loops and array
 * functions(strlen and strcat)
 * return 0
*/

void main()
{
    char name1[30], name2[15];
    
    printf("Enter name:");

    scanf("%s%s", name1, name2);

    printf("Name is %s %s\n", name1, name2);

    printf("Length of fist string is %d and the second is %d\n", _strlen(name1), _strlen(name2));

    printf("Concatenated string is %s\n", _strcat(name1, name2));
}