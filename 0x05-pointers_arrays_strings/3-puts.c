#include "main.h"
/**
 * _puts - writes a string
 * @str: string to be printed
 */
void _puts(char *str)
{
while (*str != '\0')
{
write(1, str, 1);
str++;
}
}
