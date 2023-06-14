#include <stdio.h>

/**
 * main - entry into the code
 * arrays: type, right syntax, errors
 * return:0
 *
*/

void main()
{
    int b[20];
    int i, c = 0;

    for (i = 0; i < 20; i++)
    {
        printf("Enter 20 element: ");

       while (c < 20)
       {
        scanf("%d", &b[c++]);
       }
        printf("Element of b array [%d] = %d\n", i++, b[i]);
    }
} 