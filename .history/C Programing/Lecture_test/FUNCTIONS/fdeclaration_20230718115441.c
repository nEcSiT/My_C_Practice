#include <stdio.h>

/**
 * main - entry into the code
 * function declaration: the is writing the function as how you declare a datatype
*/

int sum(int, int);


int sum(int a, int b)
{
    int sub(int , int);
    int sum = 0;
    sum = a+b;
    return (sum);
}

int sub(int a, int b)
{
    int sub = 0;
    sub = a-b;
    return (sub);
}

void main(void)
{
    int x, y, add = 0, subr = 0;
    x = 10;
    y = 100;
    
    add = sum(x, y);
    subr = sub(y,x);

    printf("addition = %d\nsubtration = %d\n",add, subr);
}
