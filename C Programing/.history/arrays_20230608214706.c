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
    int i, c = 0;
printf("Enter 5 element: ");
    for (i = 0; i < 5; i++)
    {
        

       while (c < 5)
       {
        scanf("%d", &b[c++]);
       }
        printf("Element of b array [%d] = %d\n", i, b[i++]);
    }
} 