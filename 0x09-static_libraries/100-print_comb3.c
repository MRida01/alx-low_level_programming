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

for (n = 48; n <= 56; n++)
{
for (m = n; m <= 57; m++)
{
if (m != n)
{
	putchar(n);
	putchar(m);
	if (n != 56)
	{
		putchar(44);
		putchar(32);
	}
}
}
}
putchar('\n');
return (0);
}
