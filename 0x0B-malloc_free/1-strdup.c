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

n = 0;
while (s[n] != '\0')
{
n++;
}
return (n);
}
/**
 * _strdup - copies string and returns pointer to array
 * @str: string to use
 *
 * Return: pointer to array or NULL if error
 */
char *_strdup(char *str)
{
int i;

char *array;

int size = _strlen(str);

if (*str == NULL)
{
return (NULL);
}
array = malloc(sizeof(char) * (size + 1));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = *str;
str++;
}
return (array);
}
