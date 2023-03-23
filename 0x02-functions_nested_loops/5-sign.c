#include"main.h"

/**
* print_sign - return + if n positve - if negative
* 0 if n equal zero
* @n: the character to be checked
*
* Return: 1 if n positive, -1 if n negative
* 0 if n equal zero
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
