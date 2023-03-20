#include <stdio.h>
/**
*main-Entry point
*
*Decription: print 0-9 using putchar while using variable
*
*
*Return : Always 0 (Success)
*/

int main(void)
{
    int n = 0;
    while (n <= 9)
    {
                 putchar(n + '0');
                 n++;
    }
    putchar('\n');
    return(0);
}
