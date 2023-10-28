#include "main.h"
/**
 * print_last_digit - prints last digit of int
 * @_: int to be checked
 *
 * Return: last digit of int
 */
int print_last_digit(int _)
{
int m;

m = _ % 10;
if (m < 0)
{
	m = -m;
}
m = m + 48;
_putchar(m);
m = m - 48;
return (m);
}
