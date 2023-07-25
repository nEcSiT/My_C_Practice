#include <stdio.h>

/**
 * main - entry into the code
 * void pointer - is a universal pointer that has no datatype
 * It can be assigned to any datatype.
 * Upon dereferencing it you have to Typecast it
*/

void main ()
{
    int a = 10;
    char b = 'b';
    float c = 10;

    void *ptr;

    ptr = &a;
    printf("%d\n", *(int*)ptr);

    ptr = &b;
    printf("%c\n", *(char*)ptr);

    ptr = &c;
    printf("%.1f\n", *(float*)ptr);
}