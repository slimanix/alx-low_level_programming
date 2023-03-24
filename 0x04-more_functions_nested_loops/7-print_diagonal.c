#include"main.h"

/**
* print_diagonal - print a digonal line
* @n: the number of lines
*
*/

void print_diagonal(int n)
{
int postn, space;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (postn = 1; space <= n; postn++)
{
for (space = 0; space <= postn; space++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
