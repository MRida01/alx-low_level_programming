#include "main.h"
/**
 * print_diagonal - prints a diagonal line of desired length
 * @n: line length
 */
void print_diagonal(int n)
{
int m;

int l;

for (m = 0; m < n; m++)
{
for (l = 0; l < m; l++)
{
_putchar(32);
}
_putchar(92);
_putchar(10);
}
if (n <= 0)
{
_putchar(10);
}
}
