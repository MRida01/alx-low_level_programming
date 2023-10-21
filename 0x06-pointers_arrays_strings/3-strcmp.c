#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: 0, 15, or -15
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 < *s2)
{
return -15;
}
else if (*s1 > *s2)
{
return 15;
}
else
{
return (0);
}
}
