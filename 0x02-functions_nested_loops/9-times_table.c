#include "main.h"
/**
 * times_table - prints the times table
 */
void times_table(void)
{
int n;

int m;

int t;

for (n = 0; n <= 9; n++)
{
_putchar(48);
for (m = 1; m <= 9; m++)
{
_putchar(44);
_putchar(32);
t = n * m;
if (t >= 10)
{
t = t - (t % 10);
t = t / 10;
_putchar(t + 48);
}
else
{
_putchar(32);
}
t = m * n;
t = t % 10;
_putchar(t + 48);
}
_putchar(10);
}
}
