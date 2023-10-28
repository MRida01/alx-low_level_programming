#include "main.h"
/**
 * print_alphabet_x10 - writes out the alphabet from a to z 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
int n;

int m;

for (m = 1; m <= 10; m++)
{
for (n = 97; n <= 122; n++)
{
_putchar(n);
}
_putchar(10);
}
}
