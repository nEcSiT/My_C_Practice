#include <stdio.h>

/**
 * main - entry to source code
 * _printf: function for printf
 * Return: 0
*/

void main()

{
    float a = 973455765.4537392;
    printf("%-3.5e\n", a);
    
    int b = 40;
    printf("%1d\n", b);

    double c = 499993293842928.483743;
    printf("%-4.3lf\n", c);
    return;
}