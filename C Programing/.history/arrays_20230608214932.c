#include <stdio.h>

/**
 * main - entry into the code
 * arrays: type, right syntax, errors
 * return:0
 *
*/

void main()
{
    int b[5];
    int i;
printf("Enter 5 element: ");
    for (i = 1; i < 5; i++)
    {
        
            int c = 0;
       while (c < 5)
       {
        scanf("%d", &b[c++]);
       }
        printf("Element of b array [%d] = %d\n", i, b[i++]);
    }
} 