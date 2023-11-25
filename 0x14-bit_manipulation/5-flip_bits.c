#include "main.h"
/**
 * flip_bits - returns the number of bits need to be flipped to be to a number
 * @n: first number
 * @m: second number
 *
 * Return: The number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;

unsigned int count = 0;

while (result > 0)
{
count += result & 1;
result >>= 1;
}
return (count);
}
