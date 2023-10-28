#include <stdio.h>
/**
 * main - writes out the alphabet from a to z then A to Z
 *
 * Return: 0
 */
int main(void)
{
char n;

for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
for (n = 'A'; n <= 'Z'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
