#include <stdio.h>

/**
 * main - entry into the code
 * nested do while loop: Using to create a pattern
 * return: void.
*/

void main()
{
    int a = 0, b = 0;
    
    while (a < 50)
    {
        printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        while (b < 50)
        {
            printf(" * ");
            b++;
        }
        printf("\n");
        a++;

    }
}