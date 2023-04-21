#include "recursion.h"

/**
 * sum_to_n - sums the digits from 1 to n recursively
 * @n: The number at which to end the summation.
 *
 * Return: The sum from 1 to n.
 */
int sum_to_n(int n)
{
	if (n == 1)
		return (1);
	return (n + sum_to_n(n - 1);
}
