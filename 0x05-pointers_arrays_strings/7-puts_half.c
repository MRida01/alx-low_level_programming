#include <unistd.h>
#include "main.h"
/**
 * print_rev - writes a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
char *n = s;

int m;

m = 0;
while (*n != '\0')
{
n++;
m++;
}
if (m % 2 == 1)
{
m--;
}
m = m / 2;
while (m > 0)
{
s++;
m--;
}
while (*s != '\0')
{
write(1, s, 1);
s++;
}
write(1, "\n", 1);
}
