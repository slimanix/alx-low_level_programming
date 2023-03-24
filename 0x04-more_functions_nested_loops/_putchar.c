#include <unistd.h>
#include "main.h"
/**
 *the function _putchar : to print the caracter c
 *@c : the caractere to print
 *return : on success 1
 * */
int putchar(char c)
{
return (write(1, &c, 1));
}
