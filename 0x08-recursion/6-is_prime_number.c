#include "main.h"
/**
 * isprimen - checks if n is prime
 * @n: number to check
 * @m: number to check divisibility with
 *
 * Return: 1 if prime, 0 if not
 */
int isprimen(int n, int m)
{
if (m == 1)
{
return (1);
}
if (n % m == 0)
{
return (0);
}
return (isprimen(n, m - 1));
}
/**
 * is_prime_number - checks if n is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n) {
if (n <= 1)
{
return (0);
}
return (isprimen(n, n - 1));
}
