#include "main.h"
/**
 * print_alphabet - writes out the alphabet fron a to z
 *
 * Return: 0
 */
void print_alphabet(void)
{
int n;

for (n = 97; n <= 122; n++)
{
_putchar(n);
}
_putchar(10);
}
