#include <stdio.h>
#include <conio.h>

/**
 * main - void entry into the code
 * add: adds two numbers
 * sub: subtracts two numbers
 * mul: multiplies two number
 * div: divide two numbers.
 * Return:;
*/

void main()
{
    int operator;
    int a, b, sum;

    printf("Enter operator: ");
    scanf("%d", &operator);
    printf("Enter two operands: ");
    scanf("%d%d", &a, &b);

    switch (operator)
    {
    case '+':
        sum = a + b;
        printf("addition = %d\n", sum);
        break;

     case '-':
        sum = a - b;
        printf("subtraction = %d\n", sum);
        break;

    case '*':
        sum = a * b;
        printf("multiplication = %d\n", sum);
        break;

    case '/':
        sum = a / b;
        printf("Division = %d\n", sum);
        break;
    
    default:
            printf("Enter valid operator\n");
    }
    getch();
}