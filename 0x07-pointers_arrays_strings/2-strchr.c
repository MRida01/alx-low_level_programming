#include "main.h"
/**
 * _strchr - searches a string for a character
 * @s: address to search
 * @c: char to look for
 *
 * Return: character's address or NULL
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
char *m = s;

return (m);
}
s++;
}
return (NULL);
}
