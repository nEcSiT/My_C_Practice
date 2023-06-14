#include <stdio.h>

/**
 * main - main to code
 * 
 * Return: 0
*/

int main (void)
{
    int a, i, total = 0;
    for (int a = 1; a<=5; a++)
    {
        printf("Enter an inter: ");
        scanf("%d", &i);
            if (i < 0)
                {
                    printf("Please enter a positive integer\n");
                    continue;
                }
        total = total + i;
    }
    printf("Sum = %d\n", total);

    return (0);        
}