#include "main.h"
/**
 * realsqrt - finds the square root through recursion
 * @n: number to use
 * @m: minimum possible value
 * @l: maximum possible value
 *
 * Retrun: square root or -1
 */
int realsqrt(int n, int m, int l)
{
int i = m + (l - m) / 2;

long j = (long)i * i;
    
if (j == n)
{
return i;
}
else if (j < n && (i + 1) * (i + 1) > n)
{
return (-1)
}
else if (j > n)
{
return realsqrt(n, m, i - 1);
}
else
{
return realsqrt(n, i + 1, l);
}
}
/**
 * _sqrt_recursion - finds square root by calling a recursive function
 * @n: number to use
 *
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n <= 1)
{
return (n);
}
return realsqrt(n, 0, n);
}
