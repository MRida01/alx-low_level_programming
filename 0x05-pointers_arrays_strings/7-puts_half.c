#include <unistd.h>
#include "main.h"
/**
 * puts_half - writes later half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
char *n = str;

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
while (*str != '\0')
{
write(1, str, 1);
str++;
}
write(1, "\n", 1);
}
