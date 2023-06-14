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

    d = scanf("enter fist digit %d enter second digit%d enter the operation sign %c", &a, &b, &c);

    printf("1st num %d 2nd num %d sign is %c\n", a, b, c);
   
    printf("%d\n", _sum);

    return (0);

    int _sum (int a, int b, char c)
    {
        if (a = 0, b = 0){
            return(printf("error"));
            break;
        }
        else if (c == '+'){

           int s = a + b;
        }
        else if (c == '-'){

            int s = a - b;
        }
        else if (c == '*'){

            int s = a * b;
        }
        else if (c == '/'){

            int s = a / b;
        }

        return(s);
    }
}