#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum contained value
 * @max: maximum contained value
 *
 * Return: resulting array
 */
int *array_range(int min, int max)
{
int *arr;

int n;

int i;

if (min > max)
{
return (NULL);
}
n = max - min + 1;
arr = (int *)malloc(n * sizeof(int));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < n; i++)
{
arr[i] = min + i;
}
return (arr);
}
