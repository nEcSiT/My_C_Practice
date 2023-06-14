#include <stdio.h>
#include <conio.h>

/**
 * main - entry into the code
 * for loop: use to iterate a program or used when you want to repeat a certain line of code as many as possible.
 * general syntax for (initialization, termination condition, increment or decrement)
 * return;
*/

void main()
{
    int i, j, k;

    for (i=1,j=0,k=3; i<=5,j<=6,k>1; i++,j++,k--);
    {
        printf("%d\n%d\n%d\n", i,j,k);
    }   
}