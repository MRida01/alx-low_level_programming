#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * create_array - creates an array of the specified size
 * @size: size of the array
 * @c: innitialising character
 *
 * Return: pointer to array or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
char *array;

if(size <= 0)
{
return(NULL);
}
array = malloc(sizeof(char) * size);
array[0] = c;
return(array);
}
