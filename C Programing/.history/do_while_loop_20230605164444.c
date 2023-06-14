#include <stdio.h>
#include <conio.h>

/**
 * main - entry into the code
 * do while loop: this form of loop is use to execute the code before the condition is set
 * return;
*/

void main()
{
    int a = 1, b, sum = 0;

    do
    {
        printf("Nicholas is the Best\n");
        scanf("%d", b);
        if (b < 0)
            break;
        sum = sum + b;
    } while (a);
    
}