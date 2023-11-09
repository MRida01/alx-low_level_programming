#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searches for an integer in an array.
 * @array: the array to use
 * @size: size array
 * @cmp: pointer to comparison function
 *
 * Return: index of the first element to match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
