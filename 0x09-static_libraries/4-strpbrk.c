#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - searches a string for characters
 * @s: address to search
 * @accept: characters to look for
 *
 * Return: character's address or NULL
 */
char *_strpbrk(char *s, char *accept)
{
int exit = 0;

while (exit == 0)
{
char *c = accept;

while (*c != '\0')
{
if (*s == *c)
{
char *m = s;

return (m);
}
c++;
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
