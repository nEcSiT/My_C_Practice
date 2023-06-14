#include <stdio.h>

/**
 * main - entry into the code
 * scanf: takes formatted input from the user
 * Return: 0
*/

int main(void)

{
    int a, b, c, d, sum;

    d = scanf("%d%d%d", &a, &b, &c);

    printf("%d%d%d\n", a, b, c);

    sum = a + b * c;
    printf("%d\n", sum);

    return (0);
}