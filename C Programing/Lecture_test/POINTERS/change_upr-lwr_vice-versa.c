#include <stdio.h>
#include <string.h>

/**
 * strlwr - converts strings from uppercase to lower case.
 * strupr - convert string from lower case to upper case.
 * String array
 * for loops
 * 
*/
void main()
{

char name[] = "nICHolAS DORNyO 0000";
//strlwr(name);
int i;
for (i=0; name[i] != '\0'; i++)
{
    if (name[i] >= 'A' && name[i] <= 'Z')
    {
        name[i] = name[i] + 32;
    }
}
printf("%s\n", name);

}
