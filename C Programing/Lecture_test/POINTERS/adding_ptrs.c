#include <stdio.h>

/**
 * main - entry into the code
 * arithmetic use of pointers
 * Adding values to pointer to loop through their value
*/

void main()
{
    int a[10]={11,12,13,14,15,16,17,18,19,20}, i=0;
    int *ptr = &a[0];

    printf("The value of the first index is %d\n", a[0]);
    printf("Value of pointer is %d\n", *ptr);
    printf("Lets update the value\n");

    for (i=0; i<10; i++)
    {
        printf("Value of a[%d]= %d\n", i, a[i]);
        printf("Address of a[%d]= %u\n\n", i, &a[i]);
    }

     for (i=0; i<10; )
    {
        printf("%d\n", *ptr);
        printf("Address is :%u\n", ptr);
        ptr++;
        *ptr = i++;
        printf("Updated value is %d\n\n", *ptr);

    }

    for (i=10; i>0; i--)
    {
        printf("Value of a[%d]= %d\n", i, a[i]);
    }

}