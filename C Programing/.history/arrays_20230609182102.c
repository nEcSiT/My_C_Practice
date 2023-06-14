#include <stdio.h>

/**
 * main - entry into the code
 * arrays: type, right syntax, errors, accessing arrays with loops
 * Array index always starts from 0
 * The variable eg. int a[5]; the variable 'a' stores the base address
 * which is the first address
 * return:0
 *
*/

void main()
{
    int b[5];
    int i;
    int c = 0;
printf("Enter 5 element: ");
    for (i = 0; i < 5; i++)
    {
        
            
       while (c < 5)
       {
        scanf("%d", &b[c]);
        c++;
       }
        printf("Element of b array [%d] = %d\n", i, b[i]);
    }
} 