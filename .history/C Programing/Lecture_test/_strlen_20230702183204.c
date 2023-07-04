#include <stdio.h>
#include <string.h>

/**
 * main - entry to the code
 * Topic: How to print the length of a string using both the function and a loop.
 * Return: o
*/
void main()
{
    int i, count;
    char name[30];

    printf("Enter name: ");
    gets(name);
    //count = strlen(name);
    while (name[i] = '\0')
    {
        count++;
        i++;
    }
    
    printf("%d\n", count);
}