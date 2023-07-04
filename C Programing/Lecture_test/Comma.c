#include <stdio.h>

/**
 * main - main entry to the code
 * Special operators - comma(",") , sizeof , pointers (" *, & ")
 * 
 * return: 0. 
*/

int main(void)
{
    // comma operator and assignment
    int a, b;
    a = 8;
    b = (a++, ++a, a >> 2);

    printf("%d\n%d\n", a, b);

    /**
     * int c;
    c = (printf("nicholas\n%d\n", 2, 3, 5));
    */
}