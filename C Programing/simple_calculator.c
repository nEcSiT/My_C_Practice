#include <stdio.h>

/**
 * main - main entry into the code
 * calculator: using while loop, switch and case statement
 * return:;
*/

void main()
{
    int num, total = 0, i = 1;
    char c;

    while (i <= 100)
    {
        scanf("%d %c", &num, &c);

        switch (c)
        {
        case '+':
            total = total + num;
            break;

        case '-':
            total = total - num;
            break;

        case '*':
            total = total * num;
            break;

        case '/':
            total = total / num;
            break;
        }
        
    i++;
    }
    printf("Design by necsit industry");
    
}