#include <stdio.h>

/**
 * main - main function to the code
 * return:0
*/

int main(void)
{
    int add, sum = 30;

    add = ++sum;

    printf("%d\n", add);
    printf("%d\n", sum);

    return(0);
}