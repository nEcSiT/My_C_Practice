#include <stdio.h>

/**
 * main - the entry point to the fuction
*/

int main(void)

{
    /**
    * char a = 'a';
    * char b = 98;
    */
    float y = 10;
    int x = 11; 

    int a = 4, b = 5, c = 6, d = 7;
    a += y;
    b -= x;
    c /= x;
    d *= y;
    printf("a + y = %d\n", a);
    printf("b - x = %d\n", b);
    printf("d * y = %d\n", d);
    printf("c / x = %d\n", c);
    /*printf("x %% y = %d\n", x%y);*/  
}