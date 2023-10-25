#include "main.h"
#include <unistd.h>
/**
 * _puts_recursion - has the same function as puts
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
while (*s != '\0')
{
write(1, s, 1);
s++;
}
write(1, "\n", 1);
}
