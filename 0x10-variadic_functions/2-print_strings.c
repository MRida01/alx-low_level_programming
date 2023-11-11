#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: strings to use
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list args;

va_start(args, n);
for (i = 0; i < n; ++i)
{
char *str = va_arg(args, char *);
if (str != NULL)
{
printf("%s", str);
{
else
{
printf("(nil)");
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
