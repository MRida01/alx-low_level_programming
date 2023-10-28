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

for (n = 48; n <= 55; n++)
{
for (m = n; m <= 56; m++)
{
for (o = m; o <= 57; o++)
{
if (m != n && m != o && n != o)
{
	putchar(n);
	putchar(m);
	putchar(o);
	if (n != 55)
	{
		putchar(44);
		putchar(32);
	}
}
}
}
}
putchar('\n');
return (0);
}
