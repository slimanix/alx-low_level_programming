#include <stdio.h>
/**
 *main - Entry poin
 *
 *Description: print a-z in reverse
 *
 *Return: Always 0 (Sucess)
*/

int main(void)
{
    char n = 'z';
    while (n >= 'a')
    {
                 putchar(n);
                 n--;
    }
    putchar('\n');
    return (0);
}
