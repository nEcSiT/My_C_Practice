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
    int a, b, d;
    char c;
    printf("1st num\n");
    scanf("%d", &a);

    printf("2nd num\n");
    scanf("%d", &b);
    
    printf("3rd num\n");
    scanf("%c", &c);

    //printf("1st num %d\n2nd num %d\nsign is %c\n", a, b, c);
   d = _sum(a, b, c);
   
    printf("%d\n", d);

    return (0);
}

/**
 * _sum - adds two numbers
 * @a: arg
 * @b:arg
 * @c:aeg
 * Return: (s)
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
    }        