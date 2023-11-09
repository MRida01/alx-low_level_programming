#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a function on each element of the array
 * @array: array to use
 * @size: size of array
 * @action: function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
{
return;
}
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}