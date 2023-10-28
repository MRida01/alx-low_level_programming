#include <stdio.h>
#include "main.h"
/**
 * print_array - prints a certain number of array elements
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
int m;

for (m = 0; m < n ; m++)
{
if (m != 0)
{
printf(", ");
}
printf("%d", a[m]);
}
printf("\n");
}
