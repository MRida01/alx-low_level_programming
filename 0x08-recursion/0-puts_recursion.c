#include "main.h"
#include <unistd.h>
/**
 * _puts_recursion - has the same function as puts
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
write(1, s, 1);
 _puts_recursion(s + 1);
}
else
{
write(1, "\n", 1);
}
}
