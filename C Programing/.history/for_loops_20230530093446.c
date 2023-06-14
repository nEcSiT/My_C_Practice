#include <stdio.h>
#include <conio.h>

/**
 * main - entry into the code
 * for loop: use to iterate a program or used when you want to repeat a certain line of code as many as possible.
 * general syntax for (initialization, termination condition, increment or decrement)
 * return;
*/

void main()
{
    int a;
    char c[30];

    printf("Enter you name to be echoed: ");
    scanf("%s", &c);

    for (a = 0; a < 11; a++)
    {
        printf("My name is %s\n", c);
    }
getche();
    return;
}
