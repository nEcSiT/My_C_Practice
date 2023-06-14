#include <stdio.h>

/**
 * main - entry point
 * fuction: logical operator
 * return: 0
*/

int main(void)
{
    int a = 10, b = 5;
    int result = a > b && b != 10 && b < 11 && a > 5;
    printf("%d\n", a == b && b > a);
    printf("%d\n", a && b);
    printf("%d\n", result);
}