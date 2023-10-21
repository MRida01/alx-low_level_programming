#include "main.h"
/**
 * _strncpy - copies characters from a string to another
 * @dest: destination string
 * @src: string to be copied
 * @n: number of characters to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
char *m = dest;

int l = 0;

while (*src != '\0' && n > l) {
*dest = *src;
dest++;
src++;
l++;
}
while (n > l) {
*dest = '\0';
dest++;
l++;
}
return (m);
}
