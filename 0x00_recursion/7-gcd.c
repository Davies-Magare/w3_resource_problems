#include "recursion.h"

/**
 * gcd - finds the greatest common divisor of two integers
 * @n: The first integer
 * @m: The second integer
 *
 * Return: The greatest common divisor of m and n
 */
int gcd(int m, int n)
{
	if (n == 0)
		return (m);
	return (gcd(n, m % n);
}
