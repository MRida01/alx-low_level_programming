#include "main.h"
/**
 * _isupper - checks if a letter is uppercase
 * @c: character to be checked
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
if (c <= 90 && c >= 65)
{
return (1);
}
else
{
return (0);
}
}
