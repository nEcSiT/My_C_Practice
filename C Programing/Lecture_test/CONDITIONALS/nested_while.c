#include <stdio.h>

/**
 * main - entry into the code
 * nested do while loop: Using to create a pattern
 * return: void.
*/

void main()
{
    int a = 0;
    
    while (a < 5)
    {
        int b = 0;
        printf(">>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        while (b < 9)
        {
            printf(" * ");
            b++;
        }
        printf("\n");
        a++;

    }
}