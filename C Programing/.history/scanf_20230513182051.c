#include <stdio.h>

/**
 * main - entry into the code
 * scanf: takes formatted input from the user
 * Return: 0
*/

int main(void)

{
    int a, b, c, sum;

    c = scanf("%d%d", &a, &b);

    printf("%d\n%d\n", a, b);

    sum = a + b;
    printf("%d\n", sum);

    return (0);
}