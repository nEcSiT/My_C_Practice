#include <stdio.h>

#ifndef H
#define H
int _sum (int a, int b, char c);
#endif

/**
 * main - entry into the code
 * scanf: takes formatted input from the user
 * Return: 0
*/

int main(void)

{
    int a, b, c, d;

    scanf("enter fist digit %d enter second digit %d enter the operation sign %c", &a, &b, &c);

    printf("1st num %d 2nd num %d sign is %c\n", a, b, c);
   
    printf("%d\n", _sum);

    return (0);
}

/**
 * _sum - adds two numbers
 * @a: arg
 * @b:arg
 * 
*/

int _sum (int a, int b, char c)
    {
        int s;

        while (a != 0 && b != 0)
        {
         if (c == '+'){

           s = a + b;
        }
        else if (c == '-'){
            
            s = a - b;
        }
        else if (c == '*'){

            s = a * b;
        }
        else if (c == '/'){

            s = a / b;
        }

        return(s);
    }
