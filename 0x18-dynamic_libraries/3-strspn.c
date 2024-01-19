#include "main.h"
/**
 * _strspn - searches a string for characters and counts them
 * @s: address to search
 * @accept: characters to look for
 *
 * Return: number of characters
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int m = 0;

while (*s != '\0')
{
int n = 0;

char *c = accept;

while (*c != '\0')
{
if (*s == *c)
{
n = 1;
break;
}
c++;
}
if (!n)
{
break;
}
m++;
s++;
}
return (m);
}
