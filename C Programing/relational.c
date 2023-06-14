#include <stdio.h>
#include <conio.h>
/**
 * main - void
 * Return: bool.
*/

int main(void)
{
    int a = 18, b = 9, c, d, e = 10, f;
        c = b++;
        d = b;
        f = a > b > d < c;
    printf("%d\n", a+c==b>=e<c+d!=1);
    //printf("%d\n", 'd'>'f');
   
}