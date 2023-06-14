#include <stdio.h>

/**
 * main - entry into the code
 * nested do while loop - to check the correct output of the code
 * return void
 * 
*/

void main()
{
    int a = 1, b = 3,
    do
    {
        do
            {
             printf("%d", --b),
            } while (b > 0);

            printf("%d", a++);
    } while (a < 4);
    
    
}