/**
* _isalpha - checks if a character is an alphabet
* @c: the character to be checked
*
* Return: 1 if c is an alphabet, 0 otherwise
*/
int _isalpha(int c)
{
if (c >= 90 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}
