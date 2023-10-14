#include "main.h"
/**
 * more_numbers - writes out numbers fron 0 to 14
 */
void more_numbers(void)
{
int n;

int m;

for (m = 0; m <= 1; m++)
{
for (n = 48; n <= 57; n++)
{
if (m == 1)
{
_putchar(49);
}
_putchar(n);
if (m == 1 && n == 52)
{
n = 99;
}
}
}
_putchar(10);
}
