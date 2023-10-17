#include <unistd.h>
#include "main.h"
/**
 * print_rev - writes a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
char *n;

*n = s;
while (*n != '\0')
{
n++;
}
while (n >= s)
{
write(1, n, 1);
n--;
}
write(1, "\n", 1);
}
