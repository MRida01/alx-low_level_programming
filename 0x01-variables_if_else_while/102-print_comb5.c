#include <stdio.h>
/**
 * main - lists digit combinations
 *
 * Return: 0
 */
int main(void)
{
int n;

int m;

int o;

int p;

int r;

for (n = 48; n <= 57; n++)
{
for (m = 48; m <= 57; m++)
{
r = m + 1;
for (o = s; o <= 57; o++)
{
for (p = r; p <= 57; p++)
{
putchar(n);
putchar(m);
putchar(32);
putchar(o);
putchar(p);
if (n != 57 || m != 56)
{
	putchar(44);
	putchar(32);
}
}
r = 48;
}
}
}
putchar('\n');
return (0);
}
