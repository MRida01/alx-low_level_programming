#include "main.h"
/**
 * _memset - sets a block of memory to a value
 * @s: pointer to set
 * @b: char to use
 * @n: number of bytes to set
 *
 * Return: resulting pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

char *m = s;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (m);
}
