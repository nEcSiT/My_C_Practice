#include <stdio.h>
#include <conio.h>

/**
 * main - void
 * while loop: testing the tricks in while loop
 * Return:;
*/

void main()
{
    int a = 1, sum, nub2;
    printf("Enter num2: ");
    scanf("%d", &nub2);

    while (a <= 50)
    {
        sum = nub2 * a;
        printf("%d x %d = %d\n", nub2, a, sum);
        a++;
    }

    printf("End of program\n");
}