#include <stdio.h>
/**
 * main - writes out the alphabet from a to z skipping q and e
 *
 * Return: 0
 */
int main(void)
{
char n;

for (n = 'a'; n <= 'z'; n++)
{
if (n != q && n != e)
{
	putchar(n);
}
}
putchar('\n');
return (0);
}
