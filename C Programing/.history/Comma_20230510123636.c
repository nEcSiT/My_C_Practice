#include <stdio.h>

/**
 * main - main entry to the code
 * Special operators - comma(",") , sizeof , pointers (" *, & ")
 * 
 * return: 0. 
*/

int main(void)
{
    int a, b;
    a = 3, 5;
    b = (10, 12);

    printf("%d\n %d\n", a, b);
}