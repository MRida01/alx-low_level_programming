#include "main.h"
/**
 * cap_string - capitalises a string
 * @s: string to be capitalised
 *
 * Return: capitalised string
 */
char *cap_string(char *)
{
int c = 1;

char *r = s;

while (*s != '\0') {
if (*s == 32 || *s == 9 || *s == 10)
{
c = 1;
}
if (*s == 44 || *s == 59 || *s == 46)
{
c = 1;
}
if (*s == 33 || *s == 63 || *s == 34)
{
c = 1;
}
if (*s == 40 || *s == 41 || *s == 123 || *s == 125)
{
c = 1;
}
if (*s >= 97 && *s <= 122 && c == 1) {
*s = *s - 97;
*s = *s + 65;
}
c = 0;
s++;
}
return (r);
}
