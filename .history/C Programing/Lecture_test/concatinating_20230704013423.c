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

int i = 0, count2 = 0, count1 = 0;

    while (name1 != '\0')
    {
        count1++;
        i++;
    }
    i = 0;
 while (name2 != '\0')
    {
        count2++;
        i++;
    }

 printf("Length of fist string is %d and the second is %d\n", count1, count2);

    int  i,len1, len2;
    len1 = count1;
    len2 = count2;

    for (i=0; i<=len2; i++ )
    {
        name1[len1] = name2[i];
        len1++;
    }

    printf("Name is %s %s\n", name1, name2);
   

    printf("Concatenated string is %s\n", _strcat(name1, name2));
}

#define _strcat(int * a, int* b);
/**
 * _strcat - appends a source string to a destination string
 * Returns destination string.
*/

int _strcat(int * a, int* b)
{
    
}