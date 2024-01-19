#include "main.h"
/**
 * _strncat - attaches a string to the end of another
 * @dest: destination string
 * @src: string to be attached
 * @n: number of characters to be attached
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *m = dest;

int l = 0;

while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && l < n)
{
*dest = *src;
dest++;
src++;
l++;
}
*dest = '\0';
return (m);
}
