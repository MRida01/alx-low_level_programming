#include "main.h"
/**
 * print_triangle - prints a triangle of desired size
 * @size: triangle size
 */
void print_triangle(int size)
{
int m;

int l;

int n;

for (m = 1; m <= size; m++)
{
for (l = 0; l < size - m; l++)
{
_putchar(32);
}
for (n = 0; n < m; n++)
{
_putchar(35);
}
_putchar(10);
}
if (size <= 0)
{
_putchar(10);
}
}
