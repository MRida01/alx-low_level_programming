#include "main.h"
/**
 * _strcat - attaches a string to the end of another
 * @dest: destination string
 * @src: string to be attached
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
char *n = dest;

return (n);
}
