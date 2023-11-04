#include <stdlib.h>
#include <string.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *n;

size_t m;

if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
n = malloc(new_size);
if (n == NULL)
{
return (NULL);
}
m = (old_size < new_size) ? old_size : new_size;
memcpy(n, ptr, m);
free(ptr);
return (n);
}
