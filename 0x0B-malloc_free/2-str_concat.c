#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _strlen - checks string length
 * @s: string to be checked
 *
 * Return: length of s
 */
int _strlen(char *s)
{
int n;

if (s == NULL)
{
return (0);
}
n = 0;
while (s[n] != '\0')
{
n++;
}
return (n);
}
/**
 * str_concat - concatenates two strings
 * @s1: string to append
 * @s2: string to append
 *
 * Return: pointer to array or NULL if error
 */
char *str_concat(char *s1, char *s2)
{
int i;

int j = 0;

char *array;

int size1 = _strlen(s1);

int size2 = _strlen(s2);

array = malloc(sizeof(char) * (size1 + size2 + 1));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size1; i++)
{
array[i] = *s1;
s1++;
j++;
}
for (i = 0; i < size2; i++)
{
array[i + j] = *s2;
s2++;
}
return (array);
}
