#include <stdio.h>

/**
 * main - the entry point to the fuction
*/

int main(void)

{
    /**
    * char a = 'a';
    * char b = 98;
    */
    for (int y = 2; y <= 50; y = y + 2;){
        if(y%10==0)
        {
            //y=y+2;
            continue;
        }
        printf("%d\n", y);
       
    }
}