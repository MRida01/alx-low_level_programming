#include <stddef.h>
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
int exit = 0;

while (exit == 0)
{
if (*s == c)
{
char *m = s;

return (m);
}
if (*s == '\0')
{
exit = 1;
}
else
{
s++;
}
}
return (NULL);
}
