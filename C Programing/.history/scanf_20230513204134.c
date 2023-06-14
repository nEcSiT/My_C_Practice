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
    int a, b, c;
    char d;

    scanf("%d%d%c", &a, &b, &c);

    printf("1st num %d 2nd num %d sign is %c\n", a, b, c);
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