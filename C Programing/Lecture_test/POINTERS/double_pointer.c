#include <stdio.h>

/**
 * Double pointer or pointer to a pointer
 * Points to only a pointer variable.
*/

void main()
{
    int a = 100;
    int *ptr  = &a;
    int **ptr1 = &ptr;
    int ***ptr2 = &ptr1;

    printf("%d %d %d %d\n", a, *ptr, **ptr1, ***ptr2);

    ***ptr2 = 4*5;
    printf("%d %d %d %d\n", a, *ptr, **ptr1, ***ptr2);
    printf("%x\n %x\n %x\n %x\n", a, ptr, ptr1, ptr2);
}