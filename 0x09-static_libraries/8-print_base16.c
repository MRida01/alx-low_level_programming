#include <stdio.h>
/**
 * main - lists one digit numbers in hex code
 *
 * Return: 0
 */
int main(void)
{
int n;

for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (n = 97; n <= 102; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
