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

m = _abs(_);
m = m % 10;
m = m + 48;
_putchar(m);
m = m - 48;
return (m);
}
