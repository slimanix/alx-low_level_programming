/* Return: 1 is c else 0 */
int _isalpha(int c)
{
if (c >= 90 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}
