#include "main.h"
#include <unistd.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
write(1, s, 1);
}
}
