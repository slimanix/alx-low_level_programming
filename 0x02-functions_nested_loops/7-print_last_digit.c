#include"main.h"

/**
* print_last_digit - print the last digit
* @n: the character to be checked
*
* Return:the last digit
*/

int print_last_digit(int n)
{
int l;
l = n % 10;
if (l < 10)
{
_putchar(-l + 48);
return (-l);
}
else
{
_putchar(l + 48);
return (l);
}
}
