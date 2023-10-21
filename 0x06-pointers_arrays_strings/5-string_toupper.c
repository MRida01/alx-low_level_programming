#include "main.h"
/**
 * string_toupper - turns lowercase letters into uppercase
 * @s: string to capitalise
 *
 * Return: modified string
 */
char *string_toupper(char *s)
{
char *n = s;

while (*s != '\0')
{
if (*s >= 97 && *s <= 122)
{
*s = *s - 97;
*s = *s + 65;
}
s++;
}
return (n);
}
