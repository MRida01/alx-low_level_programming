#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * alloc_grid - allocates grid
 * @width: grid width
 * @height: grid height
 *
 * Return: pointer to grid or NULL if error
 */
int **alloc_grid(int width, int height)
{
int i;

int j;

int **array;

if (width <= 0 || height <= 0)
{
return (NULL);
}
array = (int**)malloc(sizeof(int) * width);
for (i = 0; i < width; i++)
{
array [i] = (int*)malloc(height * sizeof(int));
}
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
array [i][j] = 0;
}
}
return (array);
}
