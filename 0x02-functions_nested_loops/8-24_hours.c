#include "main.h"
/**
 * jack_bauer - prints all times of the day
 */
void jack_bauer(void)
{
int h2;

int h1;

int m2;

int m1;

int h;

for (h2 = 0; h2 <= 2; h2++)
{
if (h2 == 2)
{
	h = 3;
}
else
{
	h = 9;
}
for (h1 = 0; h1 <= h; h1++)
{
for (m2 = 0; m2 <= 5; m2++)
{
for (m1 = 0; m1 <= 9; m1++)
{
_putchar(h2 + 48);
_putchar(h1 + 48);
_putchar(58);
_putchar(m2 + 48);
_putchar(m1 + 48);
_putchar(10);
}
}
}
}
}
