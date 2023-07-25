#include <stdio.h>

/**
 * main - entry into the code.
 * Function - are using defined code that perform a specific task give
 * They make it possible to use same code as many as you want
*/

void sum()
{
    int a, b, sum = 0;
    printf("enter two number to be sum: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("%d\n", sum);
}

void main()
{
    sum();
    printf("Go back to sum\n");
    sum();

    getch();
}