#include <stdio.h>
/**
 * main - lists numbers from 0 to 10
 *
 * Return: 0
 */
int main(void)
{
int n;

for (n = 48; n <= 57; n++)
{
putchar(n);
if (n != 57)
{
	putchar(44);
	putchar(32);
}
}
putchar('\n');
return (0);
}
