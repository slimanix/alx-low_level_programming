#include"main.h"
/**
* _islowercase - function to check if
*               charactere is lowercase
* @c : check input of function
* Return: Return 1 if 'c' is lowercase
*           otherwise always 0 (Success)
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
