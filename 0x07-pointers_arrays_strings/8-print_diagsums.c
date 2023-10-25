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

int j;

int n = 0;

int m = 0;

for (i = 0; i < size; i++)
{
n = n + a[i][i];
}
for (i = 0; i < size; i++)
{
  for (j = size - 1; j >= 0; j--)
{
m = m + a[i][j];
}
}
printf("%d, %d\n", n, m);
}
