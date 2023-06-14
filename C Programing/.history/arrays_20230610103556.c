#include <stdio.h>

/**
 * main - entry into the code
 * arrays: type, right syntax, errors, accessing arrays with loops
 * Array index always starts from 0
 * The variable eg. int a[5]; the variable 'a' stores the base address
 * which is the first address
 * Array name is called an internal pointer or a pointer
 * A pointer stores address.
 * To access any element of the array we use the formula
 * [Base address +(index value*size of datatype)]
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


    char string[] = {"Nicholas, Gifty, Jenny, Kwasi, Adjoa, Hannah"};

    for (i = 0; i < 6; i++)
    {
        printf("Names in the array [%d] = %d\n", i, string[i]);
    }
} 