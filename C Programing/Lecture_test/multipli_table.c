#include <stdio.h>
#include <conio.h>

/**
 * main - entry into the code
 * times table: for simple multiplication using  for loops
 * Return;
*/

void main()
{
    int a, b, mul;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    for (b = 1; b <= 12; b++)
    {
        mul = a * b;
        printf("%d x %d = %d\n", a, b, mul);
    }

    return;
}