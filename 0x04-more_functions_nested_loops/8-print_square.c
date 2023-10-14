#include "main.h"
/**
 * print_square - prints square of desired size
 * @size: square size
 */
void print_square(int size)
{
int n;

int m;
if (size <= 0)
{
_putchar(10);
}
for (n = 0; n < size; n++)
{
for (m = 0; m < size; m++)
{
_putchar(35);
}
_putchar(10);
}
}
