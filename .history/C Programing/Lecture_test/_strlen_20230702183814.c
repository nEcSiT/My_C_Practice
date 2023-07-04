#include <stdio.h>
#include <string.h>

/**
 * main - entry to the code
 * Topic: How to print the length of a string using both the function and a loop.
 * Return: o
*/
void main()
{
    int i = 0;
    char name[30], count;

    printf("Enter name: ");
    gets(name);
    //count = strlen(name);
    while (name[i] != '\0')
    {
        count--;
        i++;
    }
    
    printf("%c\n", count);
}