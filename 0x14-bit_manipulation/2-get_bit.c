#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to extract the bit from
 * @index: index of the bit to retrieve
 *
 * Return: value of bit at the specified index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
return ((n >> index) & 1);
}
