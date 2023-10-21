#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: l
 */
int _strcmp(char *s1, char *s2)
{
int l;

while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
l = *s1 - *s2;
return (l);
}
