#include "main.h"
/**
 * _memcpy - copies a memory block from one address to another
 * @dest: pointer to copy to
 * @src: pointer to copy from
 * @n: numder of bytes to copy
 *
 * Return: resulting pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

char *m = dest;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (m);
}
