#include <stdio.h>
#include <conio.h>
/**
 * main - maint entry into the script.
 * getchar: use to receive input character from the std input whereby the input shows before the output.
 * 
 * getch: this does not display the input on the screen, oly the output gets displayed
 * 
 * get che: the input displays first on the screen at the same time the output also displays on the same line.
 * 
 * Return:0 
*/

void main()
{
    char a;
    a = getch();
    printf("%c\n", a);

    return;
}