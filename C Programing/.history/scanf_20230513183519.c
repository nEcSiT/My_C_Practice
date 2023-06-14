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

    printf("1st num%d 2nd num%d 3rd num%d\n", a, b, c);

    sum = a + b * c;
    printf("%d\n", sum);

    return (0);
}