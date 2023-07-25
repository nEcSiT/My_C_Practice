#include <stdio.h>
#include <stdlib.h>
/**
 * main - entrance into the code
 * NULL pointers -  This is a user define pointer in C
 * Return: nothing
*/

void main()
{
    int *ptr = NULL;
    //ptr = (int*)malloc(3*sizeof(int));
    //ptr[0] = 4;
    //ptr[1] = 3;
    //ptr[2] = 2;

    if (ptr == NULL)
    {
        printf("Memory has not been allocated\n ");
    }
    else
        printf("%d %d %d\n", ptr[0],ptr[1], ptr[2]);
        printf("%d\n", ptr);
}