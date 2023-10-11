#include "main.h"
/**
 * _islower - checks if a letter is lowercase
 * @c: character to be checked
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
if (c <= 122 && c >= 97)
{
	return (1);
}
else
{
	return (0);
}
}
