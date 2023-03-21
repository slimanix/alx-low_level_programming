#include <stdio.h>
/**
*main - Entry poin
*
*Description: print 0, 1, -9
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
int n;
int m;
n = 0;
while (n <= 8)
{
m = 0;
while (m <= 9)
{	
putchar(n + 48);
putchar(m + 48);
if (n != 8 || m != 9)
{
putchar(',');
putchar(' ');
}
m++;
}
n++;
}
putchar('\n');
return (0);
}
