#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;

unsigned char *b;

unsigned int i;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
p = malloc(nmemb * size);
if (p == NULL)
{
return (NULL);
}
b = (unsigned char *)p;
for (i = 0; i < nmemb * size; i++)
{
b[i] = 0;
}
return (p);
}
