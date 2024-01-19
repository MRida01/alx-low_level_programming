#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: character to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
if (c <= 57 && c >= 48)
{
return (1);
}
else
{
return (0);
}
}
