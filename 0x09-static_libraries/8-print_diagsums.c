#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of diagonals
 * @a: matrix to use
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
int i;

int n = 0;

int m = 0;

for (i = 0; i < size; i++)
{
n = n + a[i * size + i];
}
for (i = 0; i < size; i++)
{
m = m + a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", n, m);
}
