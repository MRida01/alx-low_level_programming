#include <stddef.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: address to search
 * @needle: substring to look for
 *
 * Return: substring's address or NULL
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;

char *n = needle;

while (*haystack != '\0' && *n != '\0' && *haystack == *n)
{
haystack++;
n++;
}
if (*n == '\0')
{
return (h);
}
h++;
haystack = h;
}
return (NULL);
}
