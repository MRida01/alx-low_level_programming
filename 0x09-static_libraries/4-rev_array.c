#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: number of characters in an array
 */
void reverse_array(int *a, int n)
{
int *s = a;

int *e = a + n - 1;

int temp;
while (s < e)
{
temp = *s;
*s = *e;
*e = temp;
s++;
e--;
}
}
