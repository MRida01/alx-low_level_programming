#include <stdio.h>
/**
 * main - writes out the alphabet from z to a
 *
 * Return: 0
 */
int main(void)
{
char n;

for (n = 'z'; n >= 'a'; n--)
{
printf("%c", n);
}
printf("\n");
return (0);
}
