#include <stdio.h>

/**
 * main - entry into the code
 * nested do while loop: Using to create a pattern
 * return: void.
*/

void main()
{
    int a = 0;
    
    while (a < 50)
    {
        int b = 0;
        printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        while (b < 5)
        {
            printf(" * ");
            b++;
        }
        printf("\n");
        a++;

    }
}