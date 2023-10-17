#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
char *n = s;

while (*n != '\0')
{
n++;
}
n--;
while (n > s)
{
char m = *s;
*s = *n;
*n = m;
s++;
n--;
}
}
