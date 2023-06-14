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
        scanf("%d", &num);
        scanf("%c", &c);

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

        case '=':
            printf("%d\n", total);
            break;
        default:
            printf("Enter a valid number");
        }
        
    i++;
    }
    printf("Design by necsit industry");
    
}