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
while (*accept != '\0')
{
if (*s == *accept)
{
char *m = s;

return (m);
}
accept++;
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
