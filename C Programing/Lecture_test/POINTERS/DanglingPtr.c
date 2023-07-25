#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry into the code
 * Dangling pointer is a pointer assigned to a location with malloc and then freed 
 * This pointer points to a memory location that is not valid. 
*/

void main()
{
    int *ptr;
    ptr = /*function();//*/(int *) malloc(sizeof(int));
    
    *ptr = 20;

    printf("%d\n", *ptr);
    free(ptr);
    ptr =  NULL;

    if (ptr == NULL)
        printf("pointer is without and address");
    else
    printf("%d\n", *ptr);
}

/*int *function()
{
    int a = 10;
    return &a;
}
*/