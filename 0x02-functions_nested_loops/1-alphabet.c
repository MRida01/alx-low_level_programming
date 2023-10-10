#include <stdio.h>
/**
 * print_alphabet - writes out the alphabet fron a to z
 *
 * Return: 0
 */
void print_alphabet(void)
{
char n;

for (n = 'a'; n <= 'z'; n++)
{
printf("%c", n);
}
printf("\n");
}
