#include <stdio.h>

/**
 * main - entry into the code
 * arrays 
 * loops 
 * assignment.
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

#define _strcat(char* a, char* b);
/**
 * _strcat - appends a source string to a destination string
 * Returns destination string.
*/

int _strcat(int * a, int* b)
{
    int  i,len1, len2;
    len1 = _strlen(a);
    len2 = _strlen(b);

    for (i=0; i<=len2; i++ )
    {
        a[len1] = b[i];
        len1++;
    }
    return(a);
}