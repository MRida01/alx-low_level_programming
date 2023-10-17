#include <unistd.h>
#include "main.h"
/**
 * _puts - writes a string
 * @str: string to be printed
 */
void print_rev(char *s)
{
int n;

n = 0;
while (s[n] != '\0')
{
n++;
}
while (n >= 0)
{
write(1, s[n], 1);
n--;
}
write(1, "\n", 1);
}
