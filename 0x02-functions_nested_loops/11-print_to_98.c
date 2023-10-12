#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from int to 98
 * @n: int to be printed from
 */
void print_to_98(int n)
{
int m;

if (n < 98)
{
for (m = n; m < 98; m++)
{
printf("%d, ", m);
}
}
else if (n > 98)
{
for (m = n; m > 98; m--)
{
printf("%d, ", m);
}
}
printf("98");
}
