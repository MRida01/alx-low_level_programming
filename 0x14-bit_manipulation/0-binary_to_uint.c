#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: converted number, or 0 incase of an issue
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;

if (b == NULL)
return (0);
while (*b != '\0')
{
if (*b == '0' || *b == '1')
{
result = result * 2 + (*b - '0');
b++;
}
else
{
return (0);
}
}
return (result);
}
