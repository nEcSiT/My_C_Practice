#include <stdio.h>

/**
 * assigning a pointer to a pointer
*/

void main()
{
    int a = 2, b = 4;
    int *p, *q;

    p = &a;
    q = &b;
    *p = *q;

    printf("%d %d %d", a, *p, *q);
}