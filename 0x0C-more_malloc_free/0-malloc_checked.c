#include <stdlib.h>
/**
 * malloc_checked - allocates memory and checks it
 * @b: size of memory to allocate
 *
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
